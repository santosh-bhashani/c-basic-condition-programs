#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,a;
	printf("ENTER YOUR CHOICE :\n1.square of number\n2.cube of number");
	scanf("%d",&choice);
	printf("ENTER number : ");
	scanf("%d",&a);
	switch(choice)
	{
		case 1 : printf("square : %d",a*a); break;
		case 2 : printf("cube : %d ",a*a*a); break;
		default:  printf("invalid choice");
	}
	getch();
}
