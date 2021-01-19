#include <stdio.h>
#include <stdlib.h>
#define N 7
int main(){
    int V[N] = {-1, 2, 3, -6, 1, 3, 1};
    maxSubVect(V,N);
}


void maxSubVect (int *V, int n){
	int i,j, count=0, saveV=0, saveI;;
	for(i=0;i<n;i++){
		j=0;
		count=0;
		while(V[i+j]>=0 && j<N-i){
			count+=V[i+j];
			j++;
		}
		if(count>saveV){
			saveV=count;
			saveI=i;
		}
	}
	while(V[saveI]>=0 && saveI<N){
		printf("%d, ",V[saveI]);
		saveI++;
	}
	printf("\ntotal= %d", saveV);
}
