// Function pointers and callbacks

void A(){

	printf("Hello\n");
}

void B(void (*ptr)()){	// function pointer as argument

	ptr(); // call-back function that "ptr" points to
}

int main(){
	void (*p)()= A;
	B(p);
	// tambien se puede usar solo B(A); para las dos lineas anteriores
}
