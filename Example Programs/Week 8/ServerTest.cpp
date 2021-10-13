#include<iostream>
#include<string>
#include<stdio.h>
#include "ServerSocket.h"
#include "SocketException.h"

using example::ServerSocket;
using example::SocketException;
using std::cout;
using std::cerr;
using std::string;
using std::endl;

int main()
{
	try
	{
		ServerSocket socket(9999);
		socket.listen_for_connection();
		cout<<socket.receive_message()<<endl;
		socket.send_message("Hello from the server !!");
		socket.close_connection();
	}
	catch(SocketException e)
	{
		cerr<<"Error: "<<e.get_message()<<endl;
		perror(NULL);
	}
}
