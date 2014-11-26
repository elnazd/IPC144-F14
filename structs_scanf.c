#include<stdio.h>
struct Student{
	int no;
	char grades[11];

};

int main()
{
	
	struct Student harry;
	//prompt a student to input information
	printf("Please input your number and you grades:");
	
	scanf("%d",&harry.no);
	scanf("%s",harry.grades);
	
	//printing information about one Student
	
	printf("%d\t",harry.no);
	printf("%s",harry.grades);



}
