#include <stdio.h>
int main() {
    int n, moi ,vt;
	scanf("%d",&n);
	int a[n];
	for(int i=1;i<n; i++){
		scanf("%d",&a[i]);
		}
	
	 
	printf("nhap gia tri muon chen:");
        		scanf("%d",moi);

		
	printf("nhap vi tri muon chen:");
			scanf("%d",vt);

	for ( int i=n; i>vt; i--){
		a[i]=a[i-1];
		a[i-1]=moi;
		n=n+1;
	
	}
	printf("/n  day sau chen:");
	for (int i=1; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	
	
		

return 0;
}

