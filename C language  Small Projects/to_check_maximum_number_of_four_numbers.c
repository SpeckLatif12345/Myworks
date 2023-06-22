#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)

{
int a,b,c,d;  /*declaring variables*/

printf("enter four different numbers to display the maximum number\n");   /*printing instruction for user*/

scanf("%d %d %d %d",&a,&b,&c,&d);   /*taking inputs from user*/

/*performing the checking of the maximum number*/


if(a>b&&a>c&&a>d)
printf("a=%d is the maximum number\n",a);

else if(b>c&&b>d)
printf("b=%d is the maximum number\n",b);

else if(c>d)
printf("c=%d is the maximum number\n",c);


else
printf("d=%d is the maximum number\n",d);


printf("\n");
getch();
exit(0);










}
