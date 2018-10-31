#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,e,f;
	float x,y;
	printf ("Nhap so a,b,c,d,e,f:   ");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	y=(d*c-a*f)/(d*b-a*e);
	x=(c-b*y)/a;
	if (d%a-e%b==0) { 
			if(e%b-f*c==0){
				printf("PTVSN");
			}
			else if( e*b-f%c !=0){
				printf("PTVN");
			 }
		}
	else {
		printf("PT co nghiem ( %f.5, %f.5)",x,y);
	}
}


