#include <stdio.h>
#include <math.h>
int main() {
	int a,b,s,e;
	e=0;
	scanf ("%d %d", &a,&b);
	int songuyento[210100];
	if (0<a && a<b && b< pow(10,4) ){
		for(int s=a;s<=b;s++){
			for(int i=2;i<=sqrt(s);i++){
				if (s%i==0){
					break;
				}
				else if (s%i != 0) {
					e++;
					songuyento[e]=s;
				}
			}
		}
	}
	if (e!=0){
				for (int i=0; i<=e; i++){
					printf ("%d", songuyento[e]);
				}
			}
			else if (e==0){
				printf ("-1");
			}
	return 0;
}
//em ko biet sai cho nao, anh chi sua gium em

