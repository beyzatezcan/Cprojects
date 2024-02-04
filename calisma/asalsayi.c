#include<stdio.h>
#include<stdlib.h>
int asalmi(int sayi){
    int sayac=0;
    for (int i = 2; i <= 100; i++)
    {   int kontrol=1;
        for ( int j = 2; j <= i/2; j++)
        {
           if(i%j==0){
             kontrol=0;
             break;
           }
        }
       if (kontrol!=0)
       {
         sayac++;
         printf("%d sayisi asaldir ve 1-100 arasinda %d kadar asal sayi vardir\n",i,sayac);
       }
       
        
    }
   return 0; 
    
}
int main(){
    int sayi;
    asalmi(sayi);
    return 0;
}