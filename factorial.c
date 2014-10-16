
//Write a function to find the factorial of an integer (x)
//fact(x) = x * (x-1) * (x-2) * ...*3*2*1

int fact(int x)
{
	int result=1;
	int counter;
	
	for(counter=x ; counter >1; counter--)
		result = result * counter;

	return result;
}
