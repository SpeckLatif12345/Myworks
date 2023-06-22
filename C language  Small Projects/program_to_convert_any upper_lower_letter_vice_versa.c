#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()

{
char str1[100];
int i=0;

printf("This program converts words whether in Capital or Small Letters \n");
printf("Please enter your word to Convert for you \n");
gets(str1);

while(str1[i]!='\0')
{
(int)str1[i];

     if(str1[i]==65) // A
    str1[i]=97;
    else if(str1[i]==97)
        str1[i]=65;

    else if(str1[i]==66) // B
        str1[i]=98;
    else if(str1[i]==98)
        str1[i]=66;

        else if(str1[i]==67) // C
            str1[i]=99;
        else if(str1[i]==99)
            str1[i]=67;

    else if(str1[i]==68) // D
        str1[i]=100;
    else if(str1[i]==100)
        str1[i]=68;

    else if (str1[i]==69) // E
        str1[i]=101;
    else if(str1[i]==101)
        str1[i]=69;

     else if(str1[i]==70) // F
        str1[i]=102;
    else if(str1[i]==102)
        str1[i]=70;

   else  if(str1[i]==71) // G
        str1[i]=103;
    else if(str1[i]==103)
        str1[i]=71;

      else if(str1[i]==72) // H
        str1[i]=104;
      else if(str1[i]==104)
        str1[i]=72;


   else   if(str1[i]==73) // I
        str1[i]=105;
    else if(str1[i]==105)
        str1[i]=73;

  else   if(str1[i]==74) // J
        str1[i]=106;
    else if(str1[i]==106)
        str1[i]=74;

  else   if(str1[i]==75) // k
        str1[i]=107;
    else if(str1[i]==107)
        str1[i]=75;

  else   if(str1[i]==76) // L
        str1[i]=108;
    else if(str1[i]==108)
        str1[i]=76;

   else  if(str1[i]==77) // M
        str1[i]=109;
    else if(str1[i]==109)
        str1[i]=77;

  else   if(str1[i]==78) // N
        str1[i]=110;
    else if(str1[i]==110)
        str1[i]=78;

 else  if(str1[i]==79) // O
        str1[i]=111;
    else if(str1[i]==111)
        str1[i]=79;

  else if(str1[i]==80) // P
        str1[i]=112;
    else if(str1[i]==112)
        str1[i]=80;

  else   if(str1[i]==81) // Q
        str1[i]=113;
    else if(str1[i]==113)
        str1[i]=81;

  else   if(str1[i]==82) // R
        str1[i]=114;
    else if(str1[i]==114)
        str1[i]=82;

  else  if(str1[i]==83) // S
        str1[i]=115;
    else if(str1[i]==115)
        str1[i]=83;

 else    if(str1[i]==84) // T
        str1[i]=116;
    else if(str1[i]==116)
        str1[i]=84;

   else  if(str1[i]==85) // U
        str1[i]=117;
    else if(str1[i]==117)
        str1[i]=85;

   else  if(str1[i]==86) // V
        str1[i]=118;
    else if(str1[i]==118)
        str1[i]=86;

 else    if(str1[i]==87) // W
        str1[i]=119;
     else if(str1[i]==119)
        str1[i]=87;

  else   if(str1[i]==88) // X
        str1[i]=120;
    else if(str1[i]==120)
        str1[i]=88;

   else  if(str1[i]==89) // Y
        str1[i]=121;
    else if(str1[i]==121)
        str1[i]=89;

  else   if(str1[i]==90) // Z
        str1[i]=122;
    else if(str1[i]==122)
        str1[i]=90;

    i++;

}


puts(str1);

printf("\n");
getch();

    return 0;
}

