//2. Create a program that will accept three numbers and print the product of the numbers.
//Renz SanFernando
#include <stdio.h>
#include <conio.h>

main()
{
	int num1=0, num2=0, num3=0, prod=0;
	
	
	printf("Enter The First Number: ");
	scanf("%d", &num1);
	
	printf("Enter The Second Number: ");
	scanf("%d", &num2);
	
	printf("Enter The Third Number: ");
	scanf("%d", &num3);
	
	prod=num1*num2*num3;
	
	printf("\nThe Product of the three numbers are:%d",prod);


	return 0;	
	getch();
	
}

