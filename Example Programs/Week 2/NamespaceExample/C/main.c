#include<stdio.h>

#include "add.h"
#include "multiply.h"

int main()
{
	int i = 5, j = 10, k = 20;
	printf("i + j = %d\n", add(i, j));
	printf("i + j + k = %d\n", add_to_result(k));
	printf("i * j = %ld\n", multiply(i, j));
	printf("i * j * k = %ld\n", multiply_with_result(k));
}
