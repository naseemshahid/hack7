

//place your documentation and prototypes here
#include<stdio.h>
#define true 1
#define false 0

//Q1 :function prototype
 int contains(const int *arr, int size, int x);

//Q2 :function prototype
int containsWithin( int *arr, int size, int x, int i, int j);

// Q4 :function prototype
void reverse(int *arr, int size);

// Q3 :function prototype
int *paddedCopy(const int *arr, int oldSize, int newSize,int *newarr);

// Q5 :function prototype
int * reverseCopy(int *arr, int size);

// EXERCISE: 

// Question No 1

int contains(const int *arr, int size, int x){

for(int i=0;i<size;i++){

if(*arr == x){

return true;

}

arr++;

}

return false;

}

// Question No 2

int containsWithin( int *arr, int size, int x, int i, int j){

int *ptr=arr+j;

for(arr = (arr+i) ; arr <= ptr ; arr++){

if(x==*arr){

return true;

}

}

return false;

}


