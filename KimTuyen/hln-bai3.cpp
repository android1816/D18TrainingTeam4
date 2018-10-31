#include<stdio.h>
int main()
{
	int a;
	printf("Nhap so a bat ki: ");
	scanf("%d", &a);
	if(a==0) printf("khong la ca hai");
	if(a>0) printf("%d duong", a);
	if(a<0) printf("%d am", a);
	
	return 0;
}

