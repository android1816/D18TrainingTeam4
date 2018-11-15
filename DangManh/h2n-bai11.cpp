#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,a[10000],b[10000],x;
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(int j=1;j<=n;j++){
		scanf("%d",&b[j]);
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i]>=b[j]){
				x=a[i];
				a[i]=b[j];
				b[j]=x;
			}
		}
	}	
	sort(a+1,a+1+m);
	sort(b+1,b+1+n);
	for(int i=1;i<=m;i++){
		printf("%d ",a[i]);
	}
	for(int j=1;j<=n;j++){
		printf("%d ",b[j]);
	}

	return 0;
}

// code by Manh

