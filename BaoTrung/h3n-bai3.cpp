#include <stdio.h>
#include <math.h>
int snt(int a)
{
	int i,b=0;
	if(a<2) return 0;
	else {
		for (i=2;i<=sqrt(a);i++){
			if (a%i==0){
				b++;
			}
		if (b==0) return 1;
		else return 0;
		}
	}
}
int main(){
	int a,b,c,i=0;
	scanf("%d%d",&a,&b);
	for (c=a;c<=b;){
		c=a++;
		if (snt(c) !=0){
			printf ("%d \n",c);
			i++;
		}
	}
	if (i==0){
		printf("-1");
	}
}



