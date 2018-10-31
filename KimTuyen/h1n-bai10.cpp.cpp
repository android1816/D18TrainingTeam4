#include <stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/100;
	b=(n-100*a)/10;
	c=(n-100*a-10*b);
	switch(a)
	{
	   case 1: printf("mot "); break;
	   case 2: printf("hai "); break;
	   case 3: printf("ba "); break;
	   case 4: printf("bon "); break;
	   case 5: printf("nam "); break;
	   case 6: printf("sau "); break;
	   case 7: printf("bay "); break;
	   case 8: printf("tam "); break;
	   case 9: printf("chin "); break;
	}
		printf("tram ");
	if ((b==0) && (c!=0)) printf("linh ");
	switch(c)
	{
	   case 1: printf("mot "); break;
	   case 2: printf("hai "); break;
	   case 3: printf("ba "); break;
	   case 4: printf("tu "); break;
	   case 5: printf("nam "); break;
	   case 6: printf("sau "); break;
	   case 7: printf("bay "); break;
	   case 8: printf("tam "); break;
	   case 9: printf("chin "); break;
	}   
	if ((b==0) && (c==0)) return 0;
	if ((b!=0) && (c==0))
	switch(b)
	{
	   case 2: printf("hai "); break;
	   case 3: printf("ba "); break;
	   case 4: printf("bon "); break;
	   case 5: printf("nam "); break;
	   case 6: printf("sau "); break;
	   case 7: printf("bay "); break;
	   case 8: printf("tam "); break;
	   case 9: printf("chin "); break;
	}
	printf("muoi ");
	switch(c)
	{
	   case 1: printf("mot "); break;
	   case 2: printf("hai "); break;
	   case 3: printf("ba "); break;
	   case 4: printf("tu "); break;
	   case 5: printf("nam "); break;
	   case 6: printf("sau "); break;
	   case 7: printf("bay "); break;
	   case 8: printf("tam "); break;
	   case 9: printf("chin "); break;
	}
	return 0;
}

