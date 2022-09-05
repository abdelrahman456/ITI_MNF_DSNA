#include "array.h"
#include <stdio.h>
void insert_array( int array[], int value, int size , int index){
	
	if(index< size){
		
		for(int i =size-2;i>=index;i--){
			
			array[i+1]=array[i];
			
		}
		
		array[index]= value;
		
		
	}
	
	
}
void delete_array( int array[], int size , int index)
{
	
	
	if(index< size){
		
		for(int i =size-1;i>=index;i--){
			
			array[i+1]=array[i];
			
		}
		
		
		
		
	}
	
	
}
void print_array( int array[], int size){
	
	
	
	
	for(int i=0; i<size;i++){
		
		printf("%d",array[i]);
		
		
	}
	
	
	
	
	
	
	
	
}
int binary_search(int array[],int size, int key){
	
	
	int low =0;
	int high=size-1;
	int mid =(high+low)/2;
	
	
	
	
while(low<=high){
	mid=(high+low)/2;
	if(array[mid]==key){
		
		return mid;
		
		
	}else if(array[mid]>key)
	{
		high=mid-1;
		
		
		
		
	}else if (array[mid]<key)
	{
		low=mid+1;
		
		
	}else{
		
		
		
		return -1;
	}
	}
	
	
	
	
	
}