#include <stdio.h>

int main()
{
	int n,a[100000],i=0;
	int tg;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (a[i]>a[j]){
				tg=a[j];
				a[j]=a[i];
				a[i]=tg;
			}
		}
		for (int j=0;j<n;j++){
			printf ("%d",a[j]);
		}
		printf("\n");
	}
	return 0;
}


