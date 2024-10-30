#include <stdio.h>
#include <stdlib.h>
	int main(){
	
	int *x,*y,*z;
	int i, a ,b;
	int n;


	x= (int*) malloc(n*sizeof(int));
        y= (int*) malloc(n*sizeof(int));
        z= (int*) malloc(n*sizeof(int));

	if(x == NULL || y == NULL || z==NULL){
	printf("Erroe memory\n");
	return 1;
	}
	printf("Enter the No. of a:\n ");
	scanf("%d", &a);
	printf("Enter the No. of b:\n ");
        scanf("%d", &b);

	/////////////////////////////////////////////////////////////////
	printf("Enter the size of the vectors");
	scanf("%d", &n);
	printf("Enter the Elements of x: \n");
	
	for (i = 0 ; i <n;i++ ){
	printf("Element X[%d]:", i );
	scanf("%d", &x[i]);
	}	

        printf("Enter the Elements of x: \n");
	for (i = 0 ; i <n;i++ ){
        printf("Element Y[%d]:", i );
        scanf("%d", &y[i]);
        }  

	/////////////////////////////////
	printf("Resulte vector z: \n");

	for (i=0 ; i<n; i++){
		z[i]=a*x[i] +b*y[i]; 
	}

	for (i=0; i<n;i++){
		printf("Z[%d] = %d\n",i,z[i]);
	}
	free(x);
    	free(y);
    	free(z);
		return 0;
	}
