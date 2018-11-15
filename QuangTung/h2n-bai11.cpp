#include<stdio.h>
#include<math.h>
int main ()
{
	int x,y;
	scanf ("%d %d", &x,&y);
	int a[x+5], b[y+5];
	for ( int i=0 ; i<x;i++){
		scanf ("%d", &a[i]);
		}
	for ( int i=0 ; i<x;i++){
		scanf ("%d", &a[i]);
		}
	for ( int j=0; j<(x-1); j++){
		for (int h=x; j > i; j--){
			int c=0;
			if ( a[h]> a[h-1])
				c=a[h];
				a[h]=a[h-1];
				a[h-1]=c;
		}
	}
	for ( int j=0; j<(y-1); j++){
		for (int h=y; j > i; j--){
			int c=0;
			if ( b[h]> b[h-1])
				c=b[h];
				b[h]=b[h-1];
				b[h-1]=c;
		}
	}
	int max=x;
	if ( y>max)
		y=max;
	for ( int n=0; n<max;n++ ){
		if ( a[n]< b[n])
			printf ("%d",a[n]);
		else 
			printf ("%d",b[n]);
		}
		
 	return 0;
}
