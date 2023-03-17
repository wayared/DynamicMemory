// Function Pointers in C/C++
#include<stdio.h>

int Add(int a, int b){

	return a + b;

}

// int* (*Func)(int,int); declaring a function that would return int*

int main(){
	
	int c;
	int (*p)(int,int);
	p = &Add; // or this also works p = Add;
	c = (*p)(2,3);  // de-referencing and executing the function // c = p(2,3);
	printf("%d\n",c);

}
