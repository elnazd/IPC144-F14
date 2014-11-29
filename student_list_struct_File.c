/*Write a program to save students’ records. A student’s record includes the following information:
Student’s id number
Student’s grades (A,B,C,D,E,F) (a string not more than 10 characters)
Student's name (a string not more than 30 characters)
Define an array of 100 students.
Input information for each student.
Display the list of the students.
*/

#include<stdio.h>
#define SIZE 2
#define M 10
#define N 30
struct Student{
	int no;
	char grades[M+1];
	char name[N+1];
	
};

void display(struct Student s[]);
void search(struct Student s[],int key);
void searchName(struct Student s[],char keyName[]);


int main()
{
	
	struct Student student_list[SIZE];
	char keyName[N+1];
	int i=0;
	int key;
	
	FILE *fp=fopen("input.dat","r");
	if(fp!=NULL)
	{
		while(!feof(fp)){
		
			fscanf(fp,"%d;%[^;];%[^\n]\n",&student_list[i].no,student_list[i].grades,student_list[i].name);
			i++;
		
		}
	
		fclose(fp);
	}else
		printf("Error! File not found! \n");
	
	display(student_list);
	
	printf("Input the student number you're looking for:\n");
	scanf("%d%*c",&key);
	search(student_list,key);
	
	printf("Input the student name you're looking for:\n");
	scanf("%[^\n]%*c",&keyName);
	searchName(student_list,keyName);
}
void display(struct Student s[]){

	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",s[i].no);
		printf("%s\t",s[i].grades);
		printf("%s\n",s[i].name);
	
	}
}
/*This function takes an array of struct Student and a key. The key represents a number for a specific student. This function searches for the key in the array, and prints the student's grades.*/
void search(struct Student s[],int key)
{
	int i, found=0;
	for(i=0;i<SIZE && !found;i++)
	{
		if(s[i].no==key){
			printf("Number: %d, Grade: %s\n",s[i].no,s[i].grades);	
			found=1;
		}
	}
	if(found==0)
		printf("No student found!");
}

/*This function takes an array of struct Student and a keyName. The keyName represents a name for a specific student. This function searches for the key in the array, and prints the student's grades.*/
void searchName(struct Student s[],char keyName[])
{
	int i, found=0;
	for(i=0;i<SIZE && !found;i++)
	{
		if(strcmp(s[i].name,keyName)==0){
			printf("Number: %d, Grade: %s\n",s[i].no,s[i].grades);	
			found=1;
		}
	}
	if(found==0)
		printf("No student found!");
}
