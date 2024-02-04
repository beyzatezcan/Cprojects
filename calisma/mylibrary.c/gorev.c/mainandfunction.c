// main and function file

#include <stdio.h>
#include "ArraySirala.h"

void ArraySirala(int array[7]){
    int max;
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (array[i] > array[j]) {
                max = array[i];
                array[i] = array[j];
                array[j] = max;
            }
        }
    }
    

    
}

int main() {
    int array[7];

    printf("7 eleman girin:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &array[i]);
    }

    printf("Elemanlari yazdir:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d. eleman= %d\n", i + 1, array[i]);
    }
    printf("dizinin siralamasi=\n");
    ArraySirala(array);
    for (int i = 0; i < 7; i++)
    {
    printf("%d\n",array[i]);
    }
    
    

    return 0;
}
