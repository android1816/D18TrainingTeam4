#include<stdio.h>
int main()
{
	int a,x,y,z;
	scanf("%d",&a);
	x=a/100;
	y=(a-x*100)/10;
	z=a-100*x-10*y;
	if (x==1) printf("mot ");
	if (x==2) printf("hai ");
	if (x==3) printf("ba ");
	if (x==4) printf("bon ");
	if (x==5) printf("nam ");
	if (x==6) printf("sau ");
	if (x==7) printf("bay ");
	if (x==8) printf("tam ");
	if (x==9) printf("chin ");
	printf("tram ");
	if  ((y==0) && (z!=0))
		printf("linh ");
	else
	if ((z==0)&&(y==0)) return 0;
	else
	{
		if (y==2) printf("hai ");
		if (y==3) printf("ba ");
		if (y==4) printf("bon ");
		if (y==5) printf("nam ");
		if (y==6) printf("sau ");
		if (y==7) printf("bay ");
		if (y==8) printf("tam ");
		if (y==9) printf("chin ");
		printf("muoi ");
	}
	if (z==1) printf("mot ");
	if (z==2) printf("hai ");
	if (z==3) printf("ba ");
	if (z==4) printf("tu ");
	if (z==5) printf("nam ");
	if (z==6) printf("sau ");
	if (z==7) printf("bay ");
	if (z==8) printf("tam ");
	if (z==9) printf("chin ");
	return 0;
}

