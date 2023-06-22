
//THIS PROGRAM IS GOING TO WELCOME YOU WHEN YOU LOG INTO YOUR SYSTEM


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
int i,j,x;
char c='*';
char third [20]="   S  P  E  C K ";
char first[20]="   Y  O  U' R  E ";// declaring variables
 char second[20]="  W E L C O M E";


printf("\t\t\t\t\t********************\n"); // giving 5 spaces before printing the * sign  and moving to the next line
printf("\t\t\t\t\t"); //  aftering moving to next line, printing spaces to align with the previous one //

/*performing for loop to print*/
for(i=0;i<20;i++ ) // outside loop
{
    for(j=0;j<20;j++)// inside loop
    {


       if(j>0&&j<19&&i!=5&&i!=10&&i!=18) /* if (first) condition to check if j is greater than , less than 19,
        also i is not equal to 5, 10, 18 , then print (" ") */
        printf(" ");

          else if(i==5)// reaches i==5 , do this
                  {

                 if(j==0)
                 printf("**");

               if(j==18)
                printf("****");


            printf("%c",first[j]);
                  }

            else if(i==10) // reaches i==10 , this is here
            {
                if(j==0)
                    printf("**");
                if(j==18)
                    printf("*****");

                    printf("%c",second[j]);
            }


               else if(i==18) // reaches i==18, do this here
               {
                   if(j==0)
                    printf("**");

                   if(j==18)
                    printf("****");

                   printf("%c",third[j]);
               }


          else
            printf("%c",c); // if (first) fails then this takes over









    }

/* if all above finishes , then this continues that is the last bottom */


    printf("\n"); // print to to go new line
    printf("\t\t\t\t\t");// then print spaces to match with first ones


}
/* Then print this */
printf("********************");
printf("\n");
printf("Press any key to exit \n");
getch();

exit(0);


}
