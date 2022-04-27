#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

int CountDigit( int number, int digit )
{
	int num;
	int t;
	int CountDigit = 0;
	if( number > 0) t = number;
	else t = -1 * number;
	do
	{
		if(t%10 == digit)
		CountDigit++;
		t /= 10;
	}while (t > 0);
	
	return CountDigit;
}

