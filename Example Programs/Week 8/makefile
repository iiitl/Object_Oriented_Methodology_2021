all: SampleClient SampleServer

SampleClient: Socket.h Socket.cpp SocketException.h SocketException.cpp ClientTest.cpp
	g++ -o SampleClient ClientTest.cpp Socket.cpp SocketException.cpp

SampleServer: ServerSocket.h ServerSocket.cpp SocketException.h SocketException.cpp ServerTest.cpp
	g++ -o SampleServer ServerTest.cpp ServerSocket.cpp SocketException.cpp

clean:
	rm -f SampleClient SampleServer
