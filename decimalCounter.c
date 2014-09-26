#include<stdio.h>
int main()
{
	int num1,num2,counter;
	printf("Please enter num1: ");
	scanf("%d",&num1);
	
	printf("Please enter num2(greater than %d): ", num1);
	scanf("%d",&num2);
	
	counter=num1;
	while(counter<=num2){
		printf("%d\n", counter);
		counter++;
	
	}

	return 0;
}
