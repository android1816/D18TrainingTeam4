#include<stdio.h>
#include<math.h>
int main ()
{
	int n;
	scanf ("%d", &n);
	int a[n+5];
	for ( int i=0 ; i<n;i++){
		scanf ("%d", &a[i]);
		}
	for ( int j=0; j<n; j++){
		for (int h=n; h > j; h--){
			int c=0;
			if ( a[h]> a[h-1]){
				c=a[h];
				a[h]=a[h-1];
				a[h-1]=c;
				
				}
			printf ("%d\n", a[h]);
		}
		printf ( "%d", a[j]);

	}
		
 	return 0;
}
