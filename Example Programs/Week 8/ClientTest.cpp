#include<iostream>
#include<string>
#include<stdio.h>
#include "Socket.h"
#include "SocketException.h"

using example::Socket;
using example::SocketException;
using std::cout;
using std::cerr;
using std::string;
using std::endl;

int main()
{
	try
	{
		Socket socket("127.0.0.1", 9999);
		socket.connect_to_server();
		socket.send_message("Hi from client !!");
		cout<<socket.receive_message()<<endl;
		socket.close_connection();
	}
	catch(SocketException e)
	{
		cerr<<"Error: "<<e.get_message()<<endl;
		perror(NULL);
	}
}
