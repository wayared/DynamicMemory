// Pointers as function return
#include<stdio.h>
#include<stdlib.h>

void PrintHelloWorld(){
	printf("Hello World\n");
}

int *Add(int* a, int* b){ //Called function - returns pointer to integer

	//int c = (*a) + (*b);
	int* c = (int*)malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}

int main(){ // Calling function

	int a = 2, b = 4;
	int* ptr = Add(&a,&b);
	//PrintHelloWorld();
	printf("Sum = %d\n", *ptr);
		
}
