#include <stdio.h>
main(){
		int n;
		printf("Nhap so nguyen a:\n");
		scanf("%d", &n);
		if (n>10) {
			printf("greater than ten");
			return 0;
		}
		switch(n){
			case 0:
				printf("zero");
				break;
			case 1:
				printf("one");
				break;
			case 2:
				printf("two");
				break;
			case 3:
				printf("three");
				break;
			case 4:
				printf("four");
				break;
			case 5:
				printf("five");
				break;
			case 6:
				printf("six");
				break;
			case 7:
				printf("seven");
				break;
			case 8:
				printf("eight");
				break;
			case 9:
				printf("nine");
				break;
			case 10:
				printf("ten");
				break;
			default:
				break;	
		}
	}


