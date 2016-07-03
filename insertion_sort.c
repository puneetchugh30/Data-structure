#include<stdio.h>
#include<conio.h>
 
 
void main() {
   int num,arr[num], i,j,k,temp=0;
 
   printf("\nEnter no of elements :");
   scanf("%d", &num);
 
   printf("\nEnter array elements :");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
 //ascending order
   for (i = 1; i < num; i++) {
      for (j = 0; j < i; j++) {
         if (arr[j] > arr[i]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
 
      printf("\nAfter pass %d : ", i);
      for (k = 0; k < num; k++) {
         printf("%5d", arr[k]);
      }
  }
   getch();
}
 



