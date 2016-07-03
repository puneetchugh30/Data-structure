#include<stdio.h>
#include<conio.h>
 
 
void main() {
   int num,arr[num], i,j,k,temp=0;
 
   printf("\nEnter no of elements :");
   scanf("%d", &num);
 
   printf("\nEnter array elements :");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
 
   for (i = 0; i < num-1; i++) {
      for (j = 0; j < num - 1; j++) {
         if (arr[j] > arr[j + 1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
 
      printf("\nAfter pass %d : ", i);
      for (k = 0; k < num; k++) {
         printf("%5d", arr[k]);
      }
  }
   getch();
}
 


