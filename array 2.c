#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
		int array[5] ;
		int i,min,high;
		float avg,sum;
		for (i=0;i<5;i++){
			printf("\nEnter value : %d",i+1);
			scanf("%d",&array[i]);
				}
		high = array[0];
		for(i=1;i<5;i++)
	{
		if (array[i]>high)
		high=array[i];
		}
		printf("\nHighest value entered was %d",high);
		min=array[0];
		for(i=1;i<5;i++)
		{
		if(array[i]<min)
		min=array[i];
		}
		printf("\nSmalest value entered was %d",min);
		sum = avg = 0;
	   for(i = 0; i < 5; i++) {
	      sum = sum + array[i];
	   }
	   
	   avg = sum / i;
	   
	   printf("\nGia tri trung binh cua mang la: %.2f", avg); 
	}
