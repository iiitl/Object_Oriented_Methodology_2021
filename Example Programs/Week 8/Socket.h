#ifndef __Socket
#define __Socket

#include<string>
#include<netinet/in.h>

using std::string;

namespace example
{
	class Socket
	{
		private:
			int socket_descriptor;
			struct sockaddr_in server_address;

		public:
			Socket(string, int);
			void connect_to_server();
			void send_message(string);
			string receive_message();
			void close_connection();
	};
}
#endif
