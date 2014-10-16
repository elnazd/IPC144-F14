
//Write a program to find the sum of integers from 1 to 100
//sum = 1+2+3+...+100

#include<stdio.h>
int main()

{

	int sum=0;
	int counter;
	int limit;
	printf("Please enter the limit:");
	scanf("%d",&limit);
	
	for(counter=0;counter<=limit;counter++)
		sum = sum + counter;

	printf("The sum is:%d\n",sum);

}
