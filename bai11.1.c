

#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main()
	{
	char name[7][25], temp[25];
	int i ,j;
	
	printf("Nhap cac ten: ");
	for(i =0;i<5;i++)
	{
	printf("Ten: %d : ",i+1);
	fflush(stdin);
	gets(name[i]);
	}
	
	printf("Sap xep theo thu tu tang dan : ");
	for(i = 0;i<4;i++)
	{
	for(j=i+1;j<5;j++)
	if(strcmp(name[i],name[j])>0)
	{
	strcpy(temp,name[i]);
	strcpy(name[i],name[j]);
	strcpy(name[j],temp);
	}
	}
	printf("Cac ten sau khi da xap xep xong: ");
	for(i=0;i<5;i++)
{
printf("\n%s",name[i]);
}
}

	
