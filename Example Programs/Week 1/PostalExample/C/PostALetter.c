#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "LetterStruct.h"
#include "PostalServiceStruct.h"

Letter* create_letter(char* source_pin, char* destination_pin,
		char* sender, char* receiver)
{
	Letter* letter = (Letter*) malloc(sizeof(Letter));
	strcpy(letter->source_pin, source_pin);
	strcpy(letter->destination_pin, destination_pin);
	strcpy(letter->sender, sender);
	strcpy(letter->receiver, receiver);
	letter->sealed = 'n';
	return letter;
}

void seal_letter(Letter* l)
{
	printf("Sealing the letter...\n");
	l->sealed = 'y';
}

PostalService* create_postal_request(Letter letter_to_post)
{
	PostalService* request = (PostalService*) malloc(sizeof(PostalService));
	request->letter_to_post = letter_to_post;
	request->sent_date[0] = '\0';
	request->delivered_date[0] = '\0';
	return request;
}

void send_post(PostalService* request, char* sent_date)
{
	printf("Sending the post on %s...\n", sent_date);
	strcpy(request->sent_date, sent_date);
}

void deliver_post(PostalService* request, char* delivered_date)
{
	strcpy(request->delivered_date, delivered_date);
	printf("Delivered the post on %s...\n", delivered_date);
}

void generate_report(PostalService* request)
{
	printf("The letter from %s (PIN: %s) to %s (PIN: %s):\n",
			request->letter_to_post.sender, request->letter_to_post.source_pin,
			request->letter_to_post.receiver, request->letter_to_post.destination_pin);
	printf("Sent Date: %s\n", request->sent_date);
	printf("Delivered Date: %s\n", request->delivered_date);
}

int main()
{
	// Create a letter to send
	Letter* letter = create_letter("226028", "208016",
			"Saurabh Srivastava", "Shubham Sahai");

	// Now seal it
	seal_letter(letter);

	// Now create a Postal Request
	PostalService* request = create_postal_request(*letter);

	// Send the letter
	send_post(request, "06/04/2021");

	// Deliver the letter
	deliver_post(request, "07/04/2021");

	// Generate Report
	generate_report(request);

	free(request);
	free(letter);
}
