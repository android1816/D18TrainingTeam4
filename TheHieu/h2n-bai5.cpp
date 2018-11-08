#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,i,j,m,x,tong=0,dao=0;
	scanf("%d %d",&a,&b);
	for (i=a; i<=b; i++) {
		m = i;
		x=1;
	}
		if (m%2==0)
			x=0;
		else {
			while(m) {
			dao = dao*10 + m%10;
			tong += m%10;
			m = m/10;
		}
		}
			for(j=2; j<m; j++) {
			if (tong%j!=0 && dao==i)
				printf("%d",i);
			}

		if(x == 0) printf("-1");

    return 0;
}
//code by hieu


