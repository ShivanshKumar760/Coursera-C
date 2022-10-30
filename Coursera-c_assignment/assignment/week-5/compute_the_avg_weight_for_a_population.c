/*

C compiler 
average weight of elephant seals

30 october 2022

*/

#include <stdio.h>

int main()
{
	int n,i;
	float num[100],sum=0.0,avg;
	printf("Enter the number of elephants: ");
	scanf("%i",&n);

	while(n>1000 || n<1)
	{
		printf("Error! number should be in range of (1 to 100).\n");
		printf("Enter the number again: ");
		scanf("%i",&n);
	}

	for (i=0;i<n;++i)
	{
		printf("%d. Enter weight: ",i+1);
		scanf("%f",&num[i]);
		sum+=num[i];

	}

	avg=sum/n;
	printf("Average weight = %.2f",avg);
	return 0;
}