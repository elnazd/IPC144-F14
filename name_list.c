/*Write a program to accept a list of 5 names.
*/

#include<stdio.h>
int main()
{
	char names[5][10];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Please input a name:");
		scanf("%[^\n]%*c",names[i]);	
	}
	
	for(i=0;i<5;i++)
		printf("name %d is %s\n",i,names[i]);
		
	//what is the index for name "Jim"
	//Complete this code to search for a name


}
