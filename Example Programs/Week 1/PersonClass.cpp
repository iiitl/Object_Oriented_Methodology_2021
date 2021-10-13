#include<stdio.h>
#include<string.h>

class Person
{
	private:
	char fname[20];
	char lname[20];

	public:
	void setFname(char const* fNameToSet)
	{
		strcpy(fname, fNameToSet);
	}
	void setLname(char const* lNameToSet)
	{
		strcpy(lname, lNameToSet);
	}
	void printLastName()
	{
		printf("%s\n", lname);
	}
};

int main()
{
	Person player;
	player.setFname("Rohit");
	player.setLname("Sharma");
	player.printLastName();
}
