#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{

int n;/*declaring variable n*/

printf("enter any number to check if even or odd\n");/*printing instruction*/

scanf("%d",&n);/*taking input from user*/

/*performing calculation*/

if(n%2==0)
{
printf("%d is an even number\n",n);
}

else
{

printf("%d is an odd number\n",n);
}

getch();

exit(0);





}
