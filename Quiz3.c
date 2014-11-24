/*You can find the quiz here:
https://scs.senecac.on.ca/~ipc144/pages/handouts/h12.html
*/

#include<stdio.h>
#define SIZE 12
int findIndex(int aTV[],int TVstationKey);

int main()
{
	int TV[]={2,3,4,5,6,7,9,11,17,25,29,36};
	int Cable[]={17,20,16,6,3,18,8,11,61,12,28,4};
	
	//prompts the user for a TV station number
	int key;
	printf("Please input the TV station number:");
	scanf("%d",&key);
	
	

	int index = findIndex(TV,key);
	
	if(index>=0)
		printf("The corresponding cable number is:%d\n",Cable[index]);
	
	

}

int findIndex(int aTV[], int TVstationKey){

	int i;
	int found=0;
	for(i=0;i<SIZE && !found;i++)
	
	{
		
		if(aTV[i]==TVstationKey)
		{
			found =1;
		}
	}
	
	i--;
	if(found==1)
		return i;
	else{
		printf("The TV station key is not found!");
		return -1;
	}




}
