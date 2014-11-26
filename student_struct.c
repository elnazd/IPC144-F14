#include<stdio.h>
struct Student{
	int no;
	char grades[11];

};

int main()
{
	//initialize a variable of Student
	struct Student harry = {123456,"ABC"};
	struct Student bart = {741852,"AACD"};
	
	printf("The student number is: %d, and their grades are:%s\n",harry.no,harry.grades);
	printf("The student number is: %d, and their grades are:%s\n",bart.no,bart.grades);



}
