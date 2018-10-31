#include<stdio.h>
int main()
{
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	if (a==0)
		printf("khong la ca hai");
	else
		if (a<0)
			printf("am");
		else
			printf("duong");
	return 0;
}

