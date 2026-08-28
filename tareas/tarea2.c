#include <stdio.h>

#define MAX_SIZE 100

void initArrayList(int* listArray, int* listSize) {
   *listSize = 0;
}

void insertAtBeginning(int* listArray, int* listSize, int data) {
  for (int i = *listSize; i > 0; i--)
  {
    listArray[i] = listArray[i - 1];
  }
  listArray[0] = data;
  (*listSize)++;
}
void insertAtEnd(int* listArray, int* listSize, int data) {
   listArray[*listSize] = data;
   (*listSize)++;
}

void insertAfterIndex(int* listArray, int* listSize, int data, int index) {
   for (int i = *listSize -1; i > index ; i--)
   {
      listArray[i +1] = listArray[i];
   }
   listArray[index +1 ] = data;
   (*listSize)++;
   
}

void deleteAtIndex(int* listArray, int* listSize, int index) {
   for (int i = index +1; i < *listSize; i++)
   {
      listArray[i-1]=listArray[i];
   }
   (*listSize)--;
   
}

int findLength(int* listSize) {
   return *listSize;
   
}

void printArrayList(int* listArray, int* listSize) {
   for (int i = 0; i < *listSize; i++) {
      printf(" %d ->", listArray[i]);
   }
   printf("\n");
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