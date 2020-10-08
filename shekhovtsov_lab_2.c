#include <stdio.h>

int main() 

{int array[7] = {7,-4,13,0,5,13,-9};
 int maxvalue = 0;
 int temp=0;
 int i=0;

    for (i=0; i<7; i++) 

 {   if (array[i] > maxvalue) {
         maxvalue = array[i];
         temp = i;         
    }
 }

printf("максимальный элемент массива = %i\n" 
       "порядковый номер первого максимального\nэлемента в массиве = %i\n", maxvalue,temp);

int positive=0;
i=0;

 for (i=0; i<7; i++) 

    {
       if (array[i] > 0){
             positive += 1;
     }
      
    }

printf("количество положительных элементов = %d\n", positive);
    
 return 0; 
}