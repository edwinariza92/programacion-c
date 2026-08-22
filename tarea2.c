#include <stdio.h>

#define MAX_SIZE 100

void initArrayList(int* listArray, int* listSize) {
   
}

void insertAtBeginning(int* listArray, int* listSize, int data) {
 //code goes here
}

void insertAtEnd(int* listArray, int* listSize, int data) {
 //code goes here
}

void insertAfterIndex(int* listArray, int* listSize, int data, int index) {
 //code goes here
}

void deleteAtIndex(int* listArray, int* listSize, int index) {
 //code goes here
}

int findLength(int* listSize) {
 //code goes here
}

void printArrayList(int* listArray, int* listSize) {
 //code goes here
}

int main() {
   int listArray[MAX_SIZE];
   int listSize = 0;
  
   initArrayList(listArray, &listSize);
  
   insertAtEnd(listArray, &listSize, 10);
   insertAtEnd(listArray, &listSize, 20);
   insertAtEnd(listArray, &listSize, 30);
   printArrayList(listArray, &listSize);  // Output: 10 -> 20 -> 30
  
   insertAtBeginning(listArray, &listSize, 5);
   printArrayList(listArray, &listSize);  // Output: 5 -> 10 -> 20 -> 30
  
   insertAfterIndex(listArray, &listSize, 25, 2);
   printArrayList(listArray, &listSize);  // Output: 5 -> 10 -> 20 -> 25 -> 30
  
   deleteAtIndex(listArray, &listSize, 1);
   printArrayList(listArray, &listSize);  // Output: 5 -> 20 -> 25 -> 30
  
   int length = findLength(&listSize);
   printf("Length of the array list: %d\n", length);  // Output: Length of the array list: 4
  
   return 0;
}