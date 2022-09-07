
#include <stdio.h>
#include <stdlib.h>
#include "C_array.h"
typedef  struct cArray
{
	int* arr;
	int size;
	int capacity;
	
	
	
}Carray_s;



static void check_capacity(CarrayHandle me){
	
	if(me ->size == me -> capacity){
		
		me->capacity = me->capacity+(me->capacity*2)/100 +1;
	     me->arr = realloc(me->arr, me->capacity * sizeof(int) ) ;
	}
	
	
	
}
CarrayHandle array_create(int capacity){
	
	CarrayHandle new_array = (CarrayHandle) malloc(sizeof(Carray_s));
	
	if(new_array!=NULL){
		
		new_array->arr = (int*) malloc(sizeof(int*)*capacity);
		new_array->capacity= capacity;
		new_array->size=0;
		
	}
	
	
}
void array_distroy(CarrayHandle me){
	
	free(me->arr);
	
	free(me->arr);
	
}
void array_insert(CarrayHandle me ,int value, int index ){
	
	
	if(index<= me->size){
		
		for(int i =me->size-2;i>=index;i--){
			
			me->arr[i+1]=me->arr[i];
			
		}
		
		me ->arr[index]= value;
		me ->size ++;
		
	}
	
	
	
	
	
	
}

void array_get(CarrayHandle me ,int *value, int index){
	
	
	if(index <= (me->size)){
		
		
		 *value=me->arr[index];
		
		
	}
}

void array_set(CarrayHandle me ,int value, int index){
	
	if(index <= (me->size)){
		
		/*for(int i =size-2;i>=index;i--){
			
			me->arr[i+1]=me->arr[i];
			
		}*/
		
		me->arr[index]= value;
		
		
	}
	
	
	
}
void array_delete(CarrayHandle me ,int value, int index){
	
	
	
	
	if(index <= me->size){
		
		for(int i =(me->size-1);i>=index;i--){
			
			me->arr[i+1]=me->arr[i];
			
		}
		
		me->size--;
		
		
	}
}



void array_append(CarrayHandle me ,int value){
	
	
	
		
		
			check_capacity(me);
			
			me->arr[me->size]=value;
			me->size++;
	
	
	
	
}
void array_sort(CarrayHandle me){
	
	/*for(int i =0; i< size; i++)
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
	  
	     
	  
	}*/
	
	
	
	
	
	
}
void array_search(CarrayHandle me){
	
	
	
}
void array_print(CarrayHandle me){
	
	for(int i =0; i< me->size;i++){
		
		
		printf("\n %d", me->arr[i]);
		
		
		
		
		
	}
	
	
	
	
	
	
}