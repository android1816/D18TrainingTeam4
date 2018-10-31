#include <stdio.h>
int main(){
	int a, tram, chuc, donvi;
	char x, y, z;
	scanf("%d", &a);
	tram=a/100;
	chuc=(a-tram*100)/10;
	donvi=(a-tram*100-chuc*10);
	switch(tram)
	{
		case 1: printf("mot tram "); break;
		case 2: printf("hai tram "); break;
		case 3: printf("ba tram "); break;
		case 4: printf("bon tram "); break;
		case 5: printf("nam tram "); break;
		case 6: printf("sau tram "); break;
		case 7: printf("bay tram "); break;
		case 8: printf("tam tram "); break;
		case 9: printf("chin tram "); break;
	}
	switch(chuc)
	{
		case 0: printf("linh "); break;
		case 1: printf("muoi "); break;
		case 2: printf("hai muoi "); break;
		case 3: printf("ba muoi "); break;
		case 4: printf("bon muoi "); break;
		case 5: printf("nam muoi "); break;
		case 6: printf("sau muoi "); break;
		case 7: printf("bay muoi "); break;
		case 8: printf("tam muoi "); break;
		case 9: printf("chin muoi "); break;
	}
	switch(donvi)
	{
		case 1: printf("mot "); break;
		case 2: printf("hai "); break;
		case 3: printf("ba "); break;
		case 4: printf("tu "); break;
		case 5: printf("lam "); break;
		case 6: printf("sau "); break;
		case 7: printf("bay "); break;
		case 8: printf("tam "); break;
		case 9: printf("chin "); break;
	}
}
