#include <stdio.h>
int main (){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if ((a>0) &&(b>0)&&(c>0)) {
		if ((a+b>c)&&(b+c>a)&&(c+a>b)) {
		printf("la 3 canh tam giac");
		}
	else printf("khong la 3 canh tam giac");
	}
return 0;
}	
