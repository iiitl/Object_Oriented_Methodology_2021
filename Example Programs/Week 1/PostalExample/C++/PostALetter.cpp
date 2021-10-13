#include<iostream>
#include<string.h>

#include "LetterClass.h"
#include "PostalServiceClass.h"

int main()
{
	// Create a letter to send
	Letter letter("226028", "208016",
			"Saurabh Srivastava", "Shubham Sahai");

	// Now seal it
	letter.seal_letter();

	// Now create a Postal Request
	PostalService request(letter);

	// Send the letter
	request.send_post("06/04/2021");

	// Deliver the letter
	request.deliver_post("07/04/2021");

	// Generate Report
	request.generate_report();
}
