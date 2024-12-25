#include<stdio.h>
int main()
{
	float percentage;
	printf("Enter the percentage: ");
	scanf("%f",& percentage);
	if(percentage>=90)
	printf("Grade:A\n");
	else if(percentage>=75)
	printf("Grade:B\n");
	else if (percentage>=50)
	printf("Grade:C\n");
	else
	printf("Grade:F\n");
	return 0;
}