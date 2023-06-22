#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{

int a,b,c;
int t,x,y;

printf("enter three numbers to check for the biggest one\n");

scanf("%d %d %d",&a,&b,&c);
printf("the numbers you entered are %d, %d, %d\n",a,b,c);


if(a>b&&a>b)
{
     t=a;
printf(" a=%d so is the biggest number\n",a);

}

else if(a<b&&a<c)
{
      y=a;
    printf("a=%d so is the smallest number \n");

}

else
{
    x=a;
    printf("a=%d so is the middle number\n",a);

}

if(b>a&&b>c)
{
    t=b;
printf("b=%d so is the biggest number\n",b);

}

else if(b<a&&b<c)
{
    y=b;
    printf("b=%d so is the smallest number\n",b);

}

else
{
    x=b;
    printf("b=%d so is the middle number\n",b);

}

if(c>a&&c>b)
{
    t=c;
printf("c=%d so is the biggest number\n",c);

}

else if(c<a&&c<b)
{
    y=c;
printf("c=%d so is the smallest number\n",c);

}

else
{
    x=c;
    printf("c=%d so is the middle number\n",c);

}


printf("the descending order is %d, %d , %d\n",t,x,y);


getch();

exit(0);




}
