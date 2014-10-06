/*
Write a program to take two integers from the user and pass them to a function called swap. This function swaps the integers .
*/

#include<stdio.h>
void swap(int *a, int *b);

int main()
{
	int num1,num2;
	printf("Please enter num1:");
	scanf("%d",&num1);

	printf("Please enter num2:");
	scanf("%d",&num2);
	
	printf("Before swap: num1:%d-num2:%d",num1,num2);
	//Calling swap and passing addresses 
	swap(&num1,&num2);
	
	printf("After swap: num1:%d-num2:%d",num1,num2);
	return 0;

}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
