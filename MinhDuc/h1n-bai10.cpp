#include<stdio.h>
int main(){
	int i,n,m,h,j;
	scanf("%d",&m);
		n=m/100;
		h=m%100;
		j=h/10;
		i=h%10;
	if (m%100==0){
		switch(m){
			case 100: printf("mot ");break;
			case 200: printf("hai ");break;
			case 300: printf("ba ");break;
			case 400: printf("bon ");break;
			case 500: printf("nam ");break;
			case 600: printf("sau ");break;
			case 700: printf("bay ");break;
			case 800: printf("tam ");break;
			case 900: printf("chin ");break;		
	}		printf("tram ");
	}else{
		switch(n){
			case 1: printf("mot ");break;
			case 2: printf("hai ");break;
			case 3: printf("ba ");break;
			case 4: printf("bon ");break;
			case 5: printf("nam ");break;
			case 6: printf("sau ");break;
			case 7: printf("bay ");break;
			case 8: printf("tam ");break;
			case 9: printf("chin ");break;	
		}
		printf("tram ");
		switch(j){
			case 0: printf("linh ");break;
			case 1: printf("muoi ");break;
			case 2: printf("hai muoi ");break;
			case 3: printf("ba muoi ");break;
			case 4: printf("bon muoi ");break;
			case 5: printf("nam muoi ");break;
			case 6: printf("sau muoi ");break;
			case 7: printf("bay muoi ");break;
			case 8: printf("tam muoi ");break;
			case 9: printf("chin muoi ");break;	
		}

	switch(i){
			case 1: printf("mot ");break;
			case 2: printf("hai ");break;
			case 3: printf("ba ");break;
			case 4: printf("bon ");break;
			case 5: printf("nam ");break;
			case 6: printf("sau ");break;
			case 7: printf("bay ");break;
			case 8: printf("tam ");break;
			case 9: printf("chin ");break;	
}}
return 0;	
}
