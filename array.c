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



void bubble_sort(int* x, int size ){
	
int temp=0;
for(int i =0; i< size; i++)
	{
	
	
      for(int j = 0; j<(size-i); j++)
	{
	
	
      if((*(x+j))>(*(x+j+1)))
	  {
	    temp =*(x+j);
	   *(x+j)= *(x+j+1);
	   *(x+j+1)= temp;
	    
	  }
	
	
	}
	  
	     
	  
	}





}



void insert_two_array( int array_1[], int array_2[], int size ){
	
	
	int temp=0;
	int j=0;
	for(int i=0; i<=10; i++){
		
	     ++j;
		temp=array_1[i+j];
		array_1[i+j]=array_2[i];
		
		array_1[i+j+1]=temp;
		
		//array_1[j+2]=temp;
		/*if((i+1)==20){
			
			break;
		}*/
		}
	
	for(int i=0; i<10;i++){
		
		printf("%d",array_1[i]);
		
		
	}
	
	
	
	
}