#include<iostream>
#include<string.h>

#include "LetterClass.h"

using namespace std;

Letter::Letter(char const* source_pin, char const* destination_pin,
		char const* sender, char const* receiver)
{
	strcpy(this->source_pin, source_pin);
	strcpy(this->destination_pin, destination_pin);
	strcpy(this->sender, sender);
	strcpy(this->receiver, receiver);
	sealed = 'n';
}

void Letter::seal_letter()
{
	cout<<"Sealing the letter...\n";
	sealed = 'y';
}

char const* Letter::get_source_pin()
{
	return source_pin;
}

char const* Letter::get_destination_pin()
{
	return destination_pin;
}

char const* Letter::get_sender()
{
	return sender;
}

char const* Letter::get_receiver()
{
	return receiver;
}
