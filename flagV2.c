/*Write a program to input 100 integers from the user. 
The user must input ‘0’ to exit.
*/
#include<stdio.h>
int main()
{
	int counter,input;
	int done=1; //flag
	for(counter =0; counter <100 && done==1;counter++)
	{
		printf("Please input an integer(0 to exit)");
		scanf("%d",&input);
		if(input == 0)
			done=0;
	}
	

	return 0;
}
