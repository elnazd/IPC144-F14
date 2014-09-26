/*Write a function to print “Hello world!”. Call that function from the main program.*/

#include<stdio.h>
void hello();

int main()
{
	hello(); //Calling hello()

	return 0;
}
//This function prints hello world!
void hello()
{
	printf("Hello World!\n");
}
