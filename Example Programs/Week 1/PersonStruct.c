#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct PersonStruct
{
        char fname[20];
        char lname[20];
}Person;

void printLastName(Person p)
{
	strcpy(p.fname, "Ishant");
	printf("%s\n", p.lname);
}

int main()
{
	Person player;
	strcpy(player.fname, "Rohit");
	strcpy(player.lname, "Sharma");
	printLastName(player);
}
