/*Write a function to find the maximum of two given integers.
For example, the maximum of 21 and 45 is 45.
*/

#include<stdio.h>
void max(int a, int b);

int main()
{
	int num1,num2;
	
	
	printf("Please enter an integer:");
	scanf("%d",&num1); 
	
	printf("Please enter another integer:");
	scanf("%d",&num2); 
	
	max(num1,num2);

}
void max(int a, int b)
{
	if(a>b)
		printf("The maximum value is:%d",a);
	else if(a<b)
			printf("The maximum value is:%d",b);
		 else
			printf("The numbers are equal!");

}
