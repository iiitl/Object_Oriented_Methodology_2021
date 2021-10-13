#ifndef __SocketException
#define __SocketException

#include<string>

using std::exception;
using std::string;

namespace example
{
	class SocketException : public exception
	{
		private:
			string message;

		public:
			SocketException(string message);
			string get_message();
	};
}
#endif
