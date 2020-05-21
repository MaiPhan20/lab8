#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int ary[10];
	int i, high,low;
	float total=0;
	for (i=0;i<10;i++)
	{
		printf("\n enter value: %d :", i+1);
		scanf ("%d", &ary[i]);	
		if(i==0)
	{
	     high = ary[0];
		 low=ary[0];
	}
		if (ary[i]> high) high = ary[i];	
		if (ary[i]<low) low = ary[i];	
		total=total+ary[i];	
		printf ("%d",low);
	}

	
	printf ("\n Highest value entered was %d", high);
	printf ("\n Lowest value entered was %d", low);
	printf ("\n The average of the elements of ary is %f",total/10);
	
	return 0;
}
