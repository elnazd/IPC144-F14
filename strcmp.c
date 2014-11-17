/*strcmp*/
#include<stdio.h>
#include<string.h>

int main()
{
	char source[31];
	char backup[31];
	
	printf("Please input the source:");
	scanf("%[^\n]%*c",source);
	
	printf("Please input the backup:");
	scanf("%[^\n]%*c",backup);
		
	//Comparing two strings
	
	if(strcmp(source,backup)==0)
		printf("The strings are equal!");
	else
		printf("The strings are not equal!");
}
