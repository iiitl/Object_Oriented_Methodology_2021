#include<iostream>
#include<string.h>

#include "PostalServiceClass.h"

using namespace std;

PostalService::PostalService(Letter letter_to_post):letter_to_post(letter_to_post)
{
	sent_date[0] = '\0';
	delivered_date[0] = '\0';
}

void PostalService::send_post(char const* sent_date)
{
	cout<<"Sending the post on "<<sent_date<<"...\n";
	strcpy(this->sent_date, sent_date);
}

void PostalService::deliver_post(char const* delivered_date)
{
	strcpy(this->delivered_date, delivered_date);
	cout<<"Delivered the post on "<<delivered_date<<"...\n";
}

void PostalService::generate_report()
{
	cout<<"The letter from "<<letter_to_post.get_sender()<<" (PIN: "<<letter_to_post.get_source_pin()<<") to "<<letter_to_post.get_receiver()<<" (PIN: "<<letter_to_post.get_destination_pin()<<"):\n";
	cout<<"Sent Date: "<<sent_date<<"\n";
	cout<<"Delivered Date: "<<delivered_date<<"\n";
}
