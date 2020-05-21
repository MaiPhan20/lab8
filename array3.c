`#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	char alpha[26];
	int i,j;
	i=65;
	j=0;
	for(i,j;j<91;i++,j++)
	{
		alpha[j]=i;
		printf("The character now assigned is %c\n",alpha[j]);
	}
	
}
