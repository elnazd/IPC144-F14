/*strcpy*/
/*Copy one string into another string*/

#include<stdio.h>
#include<string.h>

int main()
{
	char source[61];
	char backup[31];
	
	printf("Please input your name:");
	scanf("%[^\n]",source);
	
		
	//Copying
	//Approach 3:
	strcpy(backup,source);
	
	printf("Your name is:%s\n",source);
	printf("Your backup name is:%s\n",backup);
	
	
	/*
	Approach 1:
	int i;
	for(i=0;source[i]!='\0';i++)
		backup[i]=source[i];
		
	backup[i]='\0';*/
	
	
	/*
	Approach 2:
	int i,length;
	length = strlen(source);
	
	for(i=0;i<length;i++)
		backup[i]=source[i];
		
	backup[i]='\0';
	*/
	



}
