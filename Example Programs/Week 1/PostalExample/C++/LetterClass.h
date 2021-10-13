#ifndef __LETTER
#define __LETTER
using namespace std;

class Letter
{
	private:
	char source_pin[7];
	char destination_pin[7];
	char sender[31];
	char receiver[31];
	char sealed;

	public:
	Letter(char const* source_pin, char const* destination_pin,
			char const* sender, char const* receiver);

	void seal_letter();
	char const* get_source_pin();
	char const* get_destination_pin();
	char const* get_sender();
	char const* get_receiver();
};
#endif
