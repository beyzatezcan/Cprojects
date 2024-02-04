#include<stdio.h>
#include<stdlib.h>
int desimal(int sayi,int kalan,int bolum){
   
  for ( int i = 0; i < sayi; i++)
  {
    /* code */
  }
  
    {
        kalan=sayi%2;
        printf("%d",kalan);
        bolum=sayi/2;
        kalan=bolum;
    } return 0;
    
}
int main(){
    int sayi;
    printf("bir sayi girin\n");
    scanf("%d",&sayi);
    desimal(sayi,0,0);
}