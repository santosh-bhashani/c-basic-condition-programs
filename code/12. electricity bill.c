//electricity bill program
#include<stdio.h>
#include<conio.h>
void main()
{
	int u,cost;
	printf("ENTER NUMBER OF UNITS : ");
	scanf("%d",&u);
	if(u<=100) 
	{cost=100;
	printf("cost : %d ",cost);}
	else if(u<=200)
	{cost=100+(u-100)*5;
	printf("cost : %d",cost);}
	else if(u<=400)
	{cost=200+(u-200)*10;
	printf("cost : %d",cost);}
	else if(u<=600)
	{cost=250+(u-400)*15;
	printf("cost : %d",cost);}
	else 
	{cost=300+(u-6)*20;
	printf("cost : %d",cost);}
	getch();
}
