#include "LetterStruct.h"
#ifndef __POSTAL_SERVICE
#define __POSTAL_SERVICE
typedef struct PostalService
{
	Letter letter_to_post;
	char sent_date[11];
	char delivered_date[11];
}PostalService;
#endif
