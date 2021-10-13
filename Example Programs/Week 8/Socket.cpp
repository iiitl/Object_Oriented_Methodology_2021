#include<iostream>
#include<string>
#include<cstring>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include "Socket.h"
#include "SocketException.h"

using std::cout;
using std::endl;
using std::string;
using std::strcpy;
using std::strlen;

namespace example
{
	Socket::Socket(string ip, int port)
	{
		socket_descriptor = socket(AF_INET, SOCK_STREAM, 0);
		if(socket_descriptor < 0)
			throw SocketException("Cannot create socket");
		server_address.sin_family = AF_INET;
		if(inet_pton(AF_INET, ip.c_str(), &server_address.sin_addr.s_addr) <= 0)
			throw SocketException("The IP address seems to be invalid");
		server_address.sin_port = htons(port);
	}

	void Socket::connect_to_server()
	{
		if(connect(socket_descriptor, (struct sockaddr *) &server_address, 
					sizeof(server_address)) < 0)
			throw SocketException("Could not connect to the server");
	}

	void Socket::send_message(string message)
	{
		char buffer[1024];
		strcpy(buffer, message.c_str());
		int bytes_sent = send(socket_descriptor, buffer, strlen(buffer), 0);
		if(bytes_sent < 0)
			throw SocketException("Could not send the message");
		else if(bytes_sent != strlen(buffer))
			throw SocketException("Sent something, but not sure what !!");
	}

	string Socket::receive_message()
	{
		char buffer[1024];
		memset(buffer, 0, 1024);
		int bytes_received = recv(socket_descriptor, buffer, 1023, 0);
		if(bytes_received < 0)
			throw SocketException("Could not receive the message");
		else if(bytes_received == 0)
			throw SocketException("EOF encountered, no more data to read");
		int len = strlen(buffer);
		return string(buffer, len);
	}

	void Socket::close_connection()
	{
		close(socket_descriptor);
	}
}
