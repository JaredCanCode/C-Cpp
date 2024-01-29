//1. Create a program that will accept three numbers and print the sum and the inputted numbers

#include <stdio.h>
#include <conio.h>

main()
{
	int num1=0, num2=0, num3=0, sum=0, num=0;
	
	
	printf("Enter The First Number: ");
	scanf("%d", &num1);
	
	printf("Enter The Second Number: ");
	scanf("%d", &num2);
	
	printf("Enter The Third Number: ");
	scanf("%d", &num3);
	
	sum=num1+num2+num3;
	
	printf("\nThe Sum of the three numbers are:%d",sum);
	printf("\nyour inputted numbers are:%d",num1);
	printf("\nyour inputted numbers are:%d",num2);
	printf("\nyour inputted numbers are:%d",num3);
	
	return 0;	
	getch();
	
}

