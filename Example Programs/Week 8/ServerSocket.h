#ifndef __ServerSocket
#define __ServerSocket

#define MAX_PENDING_REQUESTS 10
#include<string>

using std::string;

namespace example
{
	class ServerSocket
	{
		private:
			int socket_descriptor;
			int client_socket_descriptor;

		public:
			ServerSocket(int);
			void listen_for_connection();
			void send_message(string);
			string receive_message();
			void close_connection();
	};
}
#endif
