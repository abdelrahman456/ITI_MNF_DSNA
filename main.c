#include <stdio.h>
#include "array.h"


int main(void){
	
	int size=0 , index=0;
	printf("Enter ARRay size:");
	scanf("%d", &size);
	int array[size];
	printf("Enter Array element: ");
	for(int i=0;i<size; i++){
		printf("%d:",i);
		scanf("%d", &array[i]);
		
	}
	/*printf("Enter index you want to change:");
	scanf("%d", &index);*/
	//insert_array(array, 5, size, index);
	print_array(array, size);
	int key = binary_search(array , size , 20);
	
	printf("\n%d",key);
	
}

