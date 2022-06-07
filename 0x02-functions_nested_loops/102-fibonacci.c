#include <stdio.h>

int main(void)
{
	long long int num1 = 1, num2 = 2, temp;
	int i;

	printf("%lld, %lld, ", num1, num2);

	for (i = 0; i <= 48; i++)
	{
	       	if (i == 48)
		{	
			long long int temp2;

			temp2 = num1 + num2;
			printf("%lld\n", temp2);
			break;
		}
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		printf("%lld, ", num2);
	}
	return (0);
}
