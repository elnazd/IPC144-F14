/*Write a program to input integers from the user. 
The user must input ‘0’ to exit.
*/
#include<stdio.h>
int main()
{
	int input;
	int done=1; //flag
	while(done==1)
	{
		printf("Please input an integer(0 to exit)");
		scanf("%d",&input);
		if(input == 0)
			done=0;
	}
	

	return 0;
}
