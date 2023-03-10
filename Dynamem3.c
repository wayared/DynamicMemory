// Dynamic memory - how to use malloc
// void *p = mallloc (sizeof(int)) sizeof is the size of one unit 
// print p print the last dir address reserved according the element type 
//
// void *p = malloc (10*sizeof(int)) 10 is the number of the elemts 
//
int main(){

int *p = (int *)malloc(3 * sizeof(int))

	printf(p);
	
	*p = 2;
	*(p+1) = 4;
	*(p+2) = 6;
	printf("%d", *(p+1));

}
