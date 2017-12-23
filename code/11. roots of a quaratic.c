//roots of a quadratic of form ax^2 +bx +c
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float d,e;
    printf("Enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    d=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    e=(-b-(sqrt(b*b-4*a*c)))/(2*a);


    printf("roots are %f and %f",d,e);
    getch();

}
