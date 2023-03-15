// malloc vs calloc
#include<stdio.h>
#include<stdlib.h>
int main(){

	int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int *A = (int *)malloc(n*sizeof(int)); // dynamicaly allocated array
	
	for(int i = 0; i<n ; i++){
		A[i] = i+1;		
	}
	for(int i = 0; i<n; i++){
	printf("%d ", A[i]);
	}

	printf("\nCalloc statement\n");

	int m;
        printf("Enter size of array\n");
        scanf("%d",&m);
        int *B = (int *)calloc(m,sizeof(int)); // dynamicaly allocated array

        for(int i = 0; i<m ; i++){
                B[i] = i+1;
        }
        for(int i = 0; i<m; i++){
        printf("%d", B[i]);
        }

}
