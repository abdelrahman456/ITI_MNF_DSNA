#ifndef _C_array_h
#define _C_array_h

typedef struct cArray  Carray_s;

typedef Carray_s *CarrayHandle ; //Incomplete type

CarrayHandle array_create(int capacity);
void array_distroy(CarrayHandle me); 
void array_insert(CarrayHandle me ,int value, int index  );
void array_get(CarrayHandle me ,int *value, int index);
void array_set(CarrayHandle me ,int value, int index);
void array_delete(CarrayHandle me ,int value, int index);
void array_append(CarrayHandle me ,int value);
void array_sort(CarrayHandle me);
void array_search(CarrayHandle me);
void array_print(CarrayHandle me);







#endif