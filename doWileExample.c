/*Write a program to print  1000 stars onto the display.*/
#include<stdio.h>
int main()
{
	int counter=0;
	do
	{
		printf("*");
		counter = counter + 1; //counter++;
	
	} while(counter<1000);
	

	return 0;
}
