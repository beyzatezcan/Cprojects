#include<stdio.h>
#include<stdlib.h>
int rakamlarifarkli(int sayi){
    for (int i = 100; i < sayi; i++)
    {
        int a=i/100;//yuzler basamagi
        int b=(i/10)%10;//onlar basamagi
        int c=i%100;//birler basamagi
    
    if (a!=b && a!=c && b!=c)
    {
        printf("%d sayisinin rakamlari farklidir\n",i);
    }
    }
  return 0;  
}
int main(){
    int sayi;
    printf("ust limit girin\n");
    scanf("%d",&sayi);
    rakamlarifarkli(sayi);
    return 0;
}