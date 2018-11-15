#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,a[10000],b[10000];
	int i=0,tg;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+m);
	sort(b,b+n);
	
	for (i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if (a[i]>b[j]){
				tg=b[j];
				b[j]=a[i];
				a[i]=tg;
			}
		}
	}
	sort(a,a+m);
	sort(b,b+n);
	for (i=0;i<m;i++){
		printf ("%d",a[i]);
	}
	for (i=0;i<n;i++){
		printf ("%d",b[i]);
	}
	return 0;
}
// code boi NA que toi


