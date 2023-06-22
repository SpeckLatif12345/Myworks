#include<stdio.h>
#include<conio.h>
int main()

{
    int i,x,y,a;
    char c='*';
    for(i=1;i<=10;i++)
    {
        if(i==1)
        printf("%1c",c);

      printf("%c",c);

    }
    printf("\n");

    for(y=1;y<=10;y++)
    {
        for(x=1;x<=10;x++)
        {

     if(x==1||x==10)
       printf("*");

       printf(" ");
        }
      printf("\n");

    }

for(a=1;a<=10;a++)

{
    if(a==1)
        printf("%1c",c);

 printf("%c",c);
}
printf("\n");
getch();

    return 0;
}
