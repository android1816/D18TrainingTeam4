#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void sapxep(int a[], int n)
{
    int temp;
    for (int i = 0; i < (n-1); i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] >= a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
}
int main() {
int i,j,n, m;
int a[n+5];
scanf("%d",&n);
for (i=0; i<n; i++){
	scanf("%d",&a[i]);
}
int b[n+5];
scanf("%d",&m);
for (j=0; j<m; j++){
	scanf("%d",&b[j]);
}
sort (a,a+n);
sort (b,b+m);
    for (i=n+1; i<(m+n); i++){
    	a[i]=b[i-n];
    }
	     
    sapxep(a, (m+n));
    for (i=0; i<(m+n); i++){
    	 printf ("%d", a[i]);   	
	}
      	   
return 0;
}

