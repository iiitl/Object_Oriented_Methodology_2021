#include<iostream>
#include<string>
#include<sys/shm.h>

using std::cout;
using std::endl;
using std::string;

int main()
{
	cout<<"I am going to read the shared memory created earlier !!"<<endl;

	// Both these inputs are the same as that provided previously
	string pass_code = "shared@123";
	int pass_number = 5;

	key_t key = ftok(pass_code.c_str(), pass_number);

	// We can now attach this program to the shared memory
	int shm_id = shmget(key, sizeof(long), 0666); // Note: No IPC_CREAT

	if(shm_id < 0) // Didn't work :-(
	{
		cout<<"Failed to find the Shared Memory !!"<<endl;
	}
	else
	{
		long* memory_pointer = (long*) shmat(shm_id, NULL, 0);
		// The memory is now "attached" to this program
		
		long data = *memory_pointer;

		cout<<"Read the data ("<<data<<") from the shared memory !!"<<endl;
		
		// Let us detach the program from the memory now
		shmdt((void *) memory_pointer);

		// We can delete it too :)
		shmctl(shm_id, IPC_RMID, NULL);
	}

	return 0;
}
