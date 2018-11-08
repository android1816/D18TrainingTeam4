#include<stdio.h>
#include<math.h>
int main() {
	int a, b;
	scanf ("%d %d", &a, &b);
	int k=b-a+1;
	int check, d=0;
	for (int i=a; i<=b; i++)
	{
		check=0;
		int m=i/2;
		if (i<2) 
		{
		    check=1;
		}
		for (int j=2; j<=m; j++) 
		{
			if (i%j==0) 
			{
			    check=1;
			}
		}
		if (check==1) d++;
		if (check==0) printf ("%d ", i);
	}
	if (d==k) printf ("-1");
	//return 0;
}
