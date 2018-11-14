#include<stdio.h>
#include<math.h>
int main()
{

	int n,m,k,i,j;
	scanf("%d%d",&n,&m);
	int a[n],b[m];

	for(i=0;i<n;i++)  scanf("%d",&a[i]);
	for(i=0;i<m;i++)  scanf("%d",&b[i]);

	for (i = 0; i < n-1;i++)
		for (j = i+1; j < n; j++)
			if (a[i]>a[j])
			{
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
	
	for (i = 0; i < m-1;i++)
		for (j = i+1; j < m; j++)
			if (b[i]>b[j])
			{
				k = b[i];
				b[i] = b[j];
				b[j] = k;
			}
	
	for(i=0;i<n;i++) printf("%d ",a[i]); 
	printf("\n");
	for(i=0;i<m;i++) printf("%d ",b[i]);
	printf("\n");
	
	
	

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				{
					if (b[j]<a[i]) printf("%d ",b[j]);
					else
					{ 
						printf("%d",a[i]);
						break;
					}
					printf("%d",b[j]);
				}	

		}
		printf("%d",a[i]);

	return 0;
}
