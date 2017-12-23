//13.	The admission to a professional course if marks in subjects are as follows:If marks in Maths >= 60 and marks in Physics >= 60 marks in Chemistry >= 60 and total in all 3 subjects >=200 or total in Maths and Physics>=150.
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,m,c,total;
	printf("ENTER YOUR PHYSICS ,MATHS AND CHEMISTRY MARKS RESPECTIVELY : ");
	scanf("%d %d %d",&p,&m,&c);
	total=p+m+c;
	if(p>=60 && c>=60 && m>=60 && (total>=200 || (p+m)>=150) ) printf("Eligible");
	else printf("Not eligible");
	getch();
}
