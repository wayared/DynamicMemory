#include<time.h>
int cash = 100;
void Play(int bet){
	char C[3] = {'J','Q','K'};
	printf("Shuffling ...\n");
	srand(time(NULL)); // seeding random number generator
	int i;
	for(i=0;i <5,i++){
		int x = rand() %3;
		int y = rand() %3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp; // swaps characters at position x and y
	}
	int playerGuess;
	printf("What's the position of queen - 1,2 or 3?");
	scanf("%d,&playerGuess");
	if(C[playerGuess - 1] == 'Q'){
	cash += 3*bet;
	printf("You Win ! Result = \"%c %c %c\" Total Cash = %d\n", C[0],C[1],C[2]);
	}
	else{
	      cash -= bet;
      	      printf("You Loose! Result = \"%c %c %c\" Total Cash = %d\n", C[0],C[1],C[2]); 			      
}

int main() {
	int bet;
	printf("Welcome to the Virtual Casino\n");
	printf("Total cash = $%d\n",cash);
	while(cash > 0){
	  	printf("What's your bet? $");
		scanf("%n",&bet);
		if(bet == 0 || bet > cash) break;
		Play(bet);

	}

}
