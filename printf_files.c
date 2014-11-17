/*Write a program to open a file for writing!*/
/*Check your current directory for story.txt that is created*/
#include<stdio.h>
int main()
{
	//define a file object for writing
	FILE *fp=fopen("story.txt", "w");
	if(fp!=NULL){
		//fp is good!
		//Processing the file
		//Write "hello files!" to story.txt
		fprintf(fp,"hello files!\n");
		
		//printing a string to a file
		char name[31]="My name is Arnold.\n";
		fprintf(fp,"%s\n",name);
		
		double studentID=123456789;
		fprintf(fp,"%.2lf\n",studentID);
		
		fclose(fp);
	}
	else{
		printf("Error in opening the file!\n");	
	}



}

