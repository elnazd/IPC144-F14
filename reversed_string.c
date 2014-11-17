/*Write a program to take an input from the user and print it reversed.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char name[31];
	int i;
	
	printf("Please input your name:");
	scanf("%[^\n]%*c",name);
	
	printf("Your reversed name is:");
	//reverse the name
	int length=strlen(name);
	
	for(i=length-1;i>=0;i--)
		printf("%c",name[i]);


}
