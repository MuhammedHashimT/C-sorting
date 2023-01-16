/*
 ============================================================================
 Name        : sort.c
 Author      : Hashim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit,values[100],i,order,j,temp;

	printf("Enter the limit.");
	scanf("%d",&limit);

	printf("Enter values \n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}


	printf("Enter sorting order /n 0 for ascending and 1 for descending");
	scanf("%d",&order);
	if (order == 0){
			for(i=0;i < limit-1;i++){
				for(j=i+1;j < limit;j++){
					if(values[i]>values[j]){
						temp = values[i];
						values[i] = values[j];
						values[j] = temp;
					}
				}
			}
	}
	else{
		for(i=0;i<limit-1;i++){
					for(j=i+1;j<limit;j++){
						if(values[i]<values[j]){
							temp = values[i];
							values[i] = values[j];
							values[j] = temp;
						}
					}
				}
	}

	printf("sorted values are:");
	for(i=0;i<limit;i++){
		printf("%d ,",values[i]);
	}

	return EXIT_SUCCESS;
}
