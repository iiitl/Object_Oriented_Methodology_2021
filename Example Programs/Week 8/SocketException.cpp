#include<string>
#include "SocketException.h"

using std::string;

namespace example
{
	SocketException::SocketException(string message)
	{
		this->message = message;
	}

	string SocketException::get_message()
	{
		return message;
	}
}
