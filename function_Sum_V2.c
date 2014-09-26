/*Write a function that takes two integers and calculates the sum of the integers.
*/
#include<stdio.h>
void sum(int a, int b);

int main()
{
	int num1,num2;
	printf("Enter one integer:");
	scanf("%d",&num1); //num1 =5
	
	printf("Enter another integer:");
	scanf("%d",&num2); //num2= 10
	
	sum(num1,num2);//Calling sum and passing values	(passing 5 and 10)

	return 0;
}
//This function calculates and prints the sum of the integers
void sum(int a, int b)
{
	int result;
	result = a+b;
	printf("%d",result);

}
