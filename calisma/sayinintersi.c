#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int sayinintersi(int sayi){
    int basamaksayisi=0;
    int terssayi=0;
    do
    {
        basamaksayisi++;
        int sayi1=sayi%10;
        terssayi=terssayi*10+sayi1;
        sayi=sayi/10;
        
    } while (sayi>0);
    printf("basamak sayisi=%d,tersten yazilisi=%d\n",basamaksayisi,terssayi);
    
    
}
int main(){
    int sayi;
    printf("ssyi girin\n");
    scanf("%d",&sayi);
    sayinintersi(sayi);
    return 0;
}