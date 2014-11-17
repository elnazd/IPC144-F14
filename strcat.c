/*strcat*/

int main()
{
	char first[31]; //Harry
	char last[31]; //Potter
	char fullname[62]; //Harry Potter
	
	printf("Please input your first name:");
	scanf("%[^\n]%*c",first);//Very important to put %*c in this statement. Try this statement without %*c. Why is it important?
	
	printf("Please input your last name:");
	scanf("%[^\n]%*c",last);
	
	strcpy(fullname,first);
	strcat(fullname," ");
	strcat(fullname,last);
	
	printf("The full name is:%s\n",fullname);
	
}
	
