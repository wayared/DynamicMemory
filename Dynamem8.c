// Function pointers and callbacks

void A(){

	printf("Hello");
}

void B(void (*ptr)()){	// function pointer as argument

	ptr(); // call-back function that "ptr" points to
}

int main(){
	void ()()= A;
	B(p);
}
