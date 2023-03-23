#include<stdio.h>
#include<time.h>
extern int cash;
void Play(int bet){
	
	int cash = 100;
	
	//char C[3] = {'J','Q','K'};
	
	char *C = (char *)malloc(3*sizeof(char)); //c ++ : char *C = new char[3];
	C[0] = 'J';
	C[1] = 'Q';
	C[2] = 'K';

	printf("Shuffling ...\n");
	
	srand(time(NULL)); // seeding random number generator
	int i;
	for(i=0;i <5;i++){
		int x = rand() %3;
		int y = rand() %3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp; // swaps characters at position x and y
	}
	int playerGuess;
	printf("What's the position of queen - 1,2 or 3?");
	scanf("%d",&playerGuess);
	if(C[playerGuess - 1] == 'Q'){
	cash += 3*bet;
	printf("You Win ! Result = \"%c %c %c\" Total Cash = %d\n", C[0],C[1],C[2],cash);
	}
	else{
	      cash -= bet;
      	      printf("You Loose! Result = \"%c %c %c\" Total Cash = %d\n", C[0],C[1],C[2],cash); 			      

	}
}
