/*Write a function that takes two integers and calculates the sum of the integers.
*/
#include<stdio.h>
int sum(int a, int b);

int main()
{
	int num1,num2;
	int sum_result;
	
	printf("Enter one integer:");
	scanf("%d",&num1); //num1 =5
	
	printf("Enter another integer:");
	scanf("%d",&num2); //num2= 10
	
	
	sum_result=sum(num1,num2);//Calling sum and passing values	(passing 5 and 10)
	
	printf("%d",sum_result);

	return 0;
}
//This function calculates and returns the sum of the integers
int sum(int a, int b)
{
	int result;
	result = a+b;
	return result;
}
