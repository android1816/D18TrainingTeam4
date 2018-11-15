#include<stdio.h>
#include<math.h>
int main ()
{
	int x,y;
	scanf ("%d %d", &x);
	int a[x];
	for ( int i=0 ; i<x;i++){
		scanf ("%d", &a[i]);
		}
	scanf ("%d %d", &y);
	int b[y];
	for ( int i=0 ; i<y;i++){
		scanf ("%d", &b[i]);
		}
	for ( int j=0; j<(x); j++){
		for (int h=x; h > j; j--){
			int c=0;
			if ( a[h]> a[h-1]){
				c=a[h];
				a[h]=a[h-1];
				a[h-1]=c;
				}
		}
	}
	for ( int j=0; j<(y); j++){
		for (int h=y; h > j; j--){
			int c=0;
			if ( a[h]> a[h-1]){
				c=a[h];
				a[h]=a[h-1];
				a[h-1]=c;
				}
		}
	}
	int i=0,j=0;
	while (2){
		
		if ( a[i]< b[j]){
			printf( "%d", a[i]);
			j++;
			}
		else {
			printf ( "%d", b[j]);
			i++;
			}
		if ( i==x, j==y) break;
		}
			
			
		
		
 	return 0;
}
