/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  

  printf("\nStarting data array\n");
  print_array(test,SIZE);

  printf("\nSorted array\n");
  sort_array(test,SIZE);
  print_array(test,SIZE);

  printf("\nArray Statistics\n");
  print_statistics(test,SIZE);

  return 0;
}

/* Add other Implementation File Code Here */
void print_array(unsigned char *array , unsigned int size){

for (unsigned int i=0; i<size; i++){
  printf("%d ",array[i]);
  if ((i+1)%8==0){
    printf("\n");
  }
}
}

void print_statistics (unsigned char * array, unsigned int size){
  printf("Maximum : %u\n",(unsigned int)find_maximum(array,size));
  printf("minimum: %u\n",(unsigned int)find_minimum(array,size));
  printf("Mean : %u\n",(unsigned int)find_mean(array,size));
  printf("Median : %u\n",(unsigned int)find_median(array,size));
 



}

unsigned char find_maximum (unsigned char * array, unsigned int size){
  unsigned char max=array[0];
  for (unsigned int i=0; i<size; i++){
    if (array[i]>max){
      max=array[i];
    }
  }
  return max;
}

unsigned char find_minimum (unsigned char * array, unsigned int size){
  unsigned char min=array[0];
  for (unsigned int i=0; i<size; i++){
    if (array[i]<min){
      min=array[i];
    }
  }
  return min;
}

unsigned char find_mean(unsigned char * array, unsigned int size){
  unsigned long sum=0;
  for (unsigned int i=0; i<size; i++){
    sum+= array[i];
    
  }
  return (unsigned char)(sum/size);
}

unsigned char find_median (unsigned char * array, unsigned int size){
  unsigned char temp[SIZE];
  if (size> SIZE) return 0;

  for (unsigned int i=0; i<size; i++){
    temp[i]=array[i];
  }
  sort_array(temp,size);

  if (size%2==0){
    unsigned int mid1=temp[size/2-1];
    unsigned int mid2=temp[size/2];
    return (unsigned char)((mid1+mid2)/2);
  }else{
      return temp[size/2];
    }
}


void sort_array(unsigned char * array , unsigned int size){
  for (unsigned int i=0;i<size-1;i++){
    for (unsigned int j=i+1; j<size;j++){
      if (array[i]<array[j]){
        unsigned char temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }
}
