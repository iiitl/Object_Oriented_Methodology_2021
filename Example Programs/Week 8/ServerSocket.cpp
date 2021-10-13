#include<iostream>
#include<string>
#include<cstring>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include "ServerSocket.h"
#include "Socket.h"
#include "SocketException.h"

using std::cout;
using std::endl;
using std::string;
using std::strcpy;
using std::strlen;

namespace example
{
	ServerSocket::ServerSocket(int port)
	{
		socket_descriptor = socket(AF_INET, SOCK_STREAM, 0);
		if(socket_descriptor < 0)
			throw SocketException("Cannot create socket");
		struct sockaddr_in address;
		address.sin_family = AF_INET;
		address.sin_addr.s_addr = htonl(INADDR_ANY);
		address.sin_port = htons(port);
		if(bind(socket_descriptor, (struct sockaddr*) &address, sizeof(address))<0)
			throw SocketException("The binding of socket failed");
		if(listen(socket_descriptor, MAX_PENDING_REQUESTS) < 0)
			throw SocketException("Could not listen on the created socket");
	}

	void ServerSocket::listen_for_connection()
	{
		struct sockaddr_in client_address;
		socklen_t client_address_length = sizeof(client_address);
		client_socket_descriptor = accept(socket_descriptor, 
				(struct sockaddr *) &client_address, &client_address_length);
		if (client_socket_descriptor < 0)
			throw SocketException("Could not accept a connection over the socket");
	}

	void ServerSocket::send_message(string message)
	{
		char buffer[1024];
		strcpy(buffer, message.c_str());
		int bytes_sent = send(client_socket_descriptor, buffer, strlen(buffer), 0);
		if(bytes_sent < 0)
			throw SocketException("Could not send the message");
		else if(bytes_sent != strlen(buffer))
			throw SocketException("Sent something, but not sure what !!");
	}

	string ServerSocket::receive_message()
	{
		char buffer[1024];
		memset(buffer, 0, 1024);
		int bytes_received = recv(client_socket_descriptor, buffer, 1023, 0);
		if(bytes_received < 0)
			throw SocketException("Could not receive the message");
		else if(bytes_received == 0)
			throw SocketException("EOF encountered, no more data to read");
		int len = strlen(buffer);
		return string(buffer, len);
	}

	void ServerSocket::close_connection()
	{
		close(client_socket_descriptor);
		close(socket_descriptor);
	}
}
