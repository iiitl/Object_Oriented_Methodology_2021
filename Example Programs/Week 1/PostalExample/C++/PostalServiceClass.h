#include "LetterClass.h"

using namespace std;

class PostalService
{
	private:
	Letter letter_to_post;
	char sent_date[11];
	char delivered_date[11];

	public:
	PostalService(Letter letter_to_post);
	void send_post(char const* sent_date);
	void deliver_post(char const* delivered_date);
	void generate_report();
};
