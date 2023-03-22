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

}
