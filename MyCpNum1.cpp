//1. Create a program that will accept three numbers and print the sum and the inputted numbers
//Renz SanFernando
#include <stdio.h>
#include <conio.h>

main()
{
	int num1=0, num2=0, num3=0, sum=0, num=0, exp=500;
	
	
	printf("Enter The First Number: ");
	scanf("%d", &num1);
	
	printf("Enter The Second Number: ");
	scanf("%d", &num2);
	
	printf("Enter The Third Number: ");
	scanf("%d", &num3);
	
	sum=num1+num2+num3;
	
	
	printf("\nyour first number is: %d",num1);
	printf("\nyour second number is: %d",num2);
	printf("\nyour third number is: %d",num3);
	printf("\nThe Sum of the three numbers are:%d",sum);
	
	if(exp>sum)
	{
		printf("\nExpected output not found!!");
		printf("\nThe expected output is: %d",exp);
		printf("\nBaog ka pa!!!");
		
	}
	else
	{
		printf("\nThe output is Exellent!!");
		printf("\nThe expected output is: %d",exp);
		printf("\nNice galing!!");
		
	}

	return 0;	
	getch();
	
}

