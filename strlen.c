/*strlen*/

#include<stdio.h>
#include<string.h>

int main()
{
	char name[31];
	int length;
	
	printf("Please input your name:");
	scanf("%[^\n]%*c",name);
	
	//Finding the length of the name
	length = strlen(name);
	
	printf("The name is:%s\n",name);
	printf("The length is:%d",length);



}
