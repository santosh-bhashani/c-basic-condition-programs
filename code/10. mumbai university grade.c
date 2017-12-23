//grade caluclator
#include<stdio.h>
void main()
{
    int m; //marks
    printf("ENTER YOUR MARKS :");
    scanf("%d",&m);
    if (m>=80) {printf("O GRADE");}
    else if (m>=70) {printf("A+ GRADE");}
    else if (m>=60)  {printf("A GRADE");}
    else if (m>=55) {printf("B+ GRADE");}
    else if (m>=50) {printf("B GRADE");}
    else if (m>=45) {printf("C GRADE");}
    else if (m>=40) {printf("D GRADE");}
    else { printf("F GRADE");}
    getch();
};
