#include <stdio.h>


extern int Add(int a, int b);


//Add some message on master
//Test

//Test2
//Fix Bug 1
//Fix Bug 2 2222
//Fix Bug 3 other modifies
//Delete something
//Test Sign
//Test Sign tag
//Test


int main()
{
	int a = 5, b = 10;
	int result = 0;

	printf("Hello world\n");

	result = Add(a, b);

	printf("result = %d", result);

	return 0;
}
