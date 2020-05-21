#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
   char s[10];
   int tong=0;
   int i;
   i=0;
   printf("Nhap dong:");
   gets(s);
   for( i=0;i<strlen(s);i++)
   {
      switch(s[i])
      {
     case 'A':
     case 'a':
     case 'E':
     case 'e':
     case 'I':
     case 'i':
     case 'O':
     case 'o':
     case 'U':
     case 'u':
          tong++;
          break;
     default:;
     }
  }
  printf("\nCo %d nguyen am",tong);
}
