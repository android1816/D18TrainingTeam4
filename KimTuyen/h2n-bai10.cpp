#include <bits/stdc++.h>
using namespace std;

void bubblesort (int a[100], int n)
{
	int i, j;
	for ( i=0 ; i< n-1 ; i++)
	{
		for( j=0 ; j<n-i-1 ; j++)
			if(a[j] < a[j+1])
				swap(a[j], a[j+1]); 
					for(int m=0 ; m<n ; m++)	printf("%d ",a[m]);
					printf("\n");
				
		
	}	
}

int main()
{
   int a[100], n;
   scanf("%d", &n);
   for(int i=0; i<n; i++)
       scanf("%d", &a[i]);
    bubblesort(a,n);
    return 0;
}


