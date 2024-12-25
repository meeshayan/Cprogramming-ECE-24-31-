#include<stdio.h>
int main()
{
	int n,i=1,j;
	printf("Enter the number of repetitions: ");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=5)
		{
			printf("%d",j);
			j++;
		}
		i++;
	}
	return 0;
}