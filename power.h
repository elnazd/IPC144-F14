 // power returns the value of base raised to 
 //  the power of exponent (base^exponent)
 //
 //  power assumes that base and exponent are
 //  integer values and exponent is non-negative 
 //
 
int power(int base, int exp)
{
	int result=1;
	int i;
	for(i=0;i<exp;i++)
	{
		result=result*base;
	}
	return result;
	
}
