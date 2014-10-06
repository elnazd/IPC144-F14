#include<stdio.h>
int main()
{
	int first,second,result;
	printf("Please enter first:");
	scanf("%d",&first);
	
	printf("Please enter second:");
	scanf("%d",&second);
	
	if(second>first && second%first==0)
	{
		result=second/first;
		printf("The result is=%d",result);
	}else
	{
		if(second>first)
			printf("%d is the greatest",second);
		else
			printf("%d is the greatest",first);
	}


}
