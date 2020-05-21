#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>

void main()
{
   int a[100],n;
   int i;
   i=0;
   printf("\n\t\tNhap mang");
   printf("\nNhap vao n phan tu: ");
   scanf("%d",&n);
  {
   for( i = 0; i<n; i++)
   {
      printf("\tNhap phan tu [%d]: ",i);
      scanf("%d",&a[i]);
   }
}
   printf("\nMang vua nhap la: ");
  {
   for( i = 0; i<n; i++)
   {
      printf("%4d",a[i]);
   }
}
  for( i=0;i<n/2;i++)
    {
      int temp=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=temp; 
   }
   printf("\nMang bay h la :");
   for( i = 0; i<n; i++)
   {
      printf("%4d",a[i]);
   }
}
