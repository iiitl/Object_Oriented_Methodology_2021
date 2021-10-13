#include<iostream>
#include<string>
#include<sys/shm.h>

using std::cout;
using std::endl;
using std::string;

int main()
{
	long data = 42; // Answer to the Ultimate Question of Life, the Universe, and Everything

	cout<<"I am going to create a shared memory now !!"<<endl;

	// Both these inputs are used to generate a key
	string pass_code = "shared@123";
	int pass_number = 5;

	key_t key = ftok(pass_code.c_str(), pass_number);

	// We can now create the memory
	int shm_id = shmget(key, sizeof(data), IPC_CREAT | 0666);

	if(shm_id < 0) // Didn't work :-(
	{
		cout<<"Failed to create the Shared Memory !!"<<endl;
	}
	else
	{
		long* memory_pointer = (long*) shmat(shm_id, NULL, 0);
		// The memory is now "attached" to this program
		
		*memory_pointer = data;

		cout<<"Wrote the data ("<<data<<") at the shared memory !!"<<endl;

		// Let us detatch the program from the memory now
		shmdt((void *) memory_pointer);
	}

	return 0;
}
