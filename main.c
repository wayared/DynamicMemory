#include <stdio.h>
#include<stdlib.h>

int cash = 100;
int main() {
	int bet;
	printf("Welcome to the Virtual Casino\n");
	printf("****Welcome to the Virtual Casino***\n\n");
	printf("Total cash = $%d\n",cash);
	while(cash > 0){
	  	printf("What's your bet? $");
		scanf("%d",&bet);
		if(bet == 0 || bet > cash) break;
		Play(bet);

		printf("\n **********************************************\n");
		}
	}

