#include <stdio.h>
//#include "array.h"
#include "C_Array/C_array.h"

int main(void){
#if 0	
	int size=0 , index=0;
	/*printf("Enter ARRay size:");
	scanf("%d", &size);*/
	int array[size];
	int array_1[20]={1,3,5,7,9,11,13,15,17,19};
	int array_2[10]={2,4,6,8,10,12,14,16,18,20};
	
	insert_two_array(array_1, array_2, 20);
	
	/*printf("Enter Array element: ");
	for(int i=0;i<size; i++){
		printf("%d:",i);
		scanf("%d", &array[i]);
		
	}*/
	/*printf("Enter index you want to change:");
	scanf("%d", &index);*/
	//insert_array(array, 5, size, index);
	print_array(array_1, 20);
	//int key = binary_search(array , size , 20);
	
	//printf("\n%d",key);
#endif
 
 
 
 CarrayHandle myarray =	 array_create(5);
 
 for(int i=0; i<=10; i++){
	 
	 
	 array_insert(myarray, i, i);
	 
	 
	 
	 
 }
 array_print(myarray);
 
}

