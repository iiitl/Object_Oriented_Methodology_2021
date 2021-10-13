#ifndef __LETTER
#define __LETTER
typedef struct Letter
{
	char source_pin[7];
	char destination_pin[7];
	char sender[31];
	char receiver[31];
	char sealed;
}Letter;
#endif
