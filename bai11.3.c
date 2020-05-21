#include<stdio.h>

void main()
{
   int a[100],n;
   int i;
   i=0;
   printf("\n\t\tNhap mang, dao mang va xuat mang mot chieu");
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
   for( i = 0; i<n; i++)
   {
      printf("%4d",a[i]);
   }
}
   

   

