#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){

    int A[100];
    int n,i;
    printf("Nhap vao so luong phan tu cua mang la: ");
    scanf("%d", &n);
    for( i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &A[i]);
    }

    for( i=n-1; i>=0; i--)
    {
        printf(" %d", A[i]);
    }

   
   return 0;
}
