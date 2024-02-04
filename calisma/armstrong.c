#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int armstrong(int sayi){
    int basamak=0;
    int toplam=0;
    int sayi1=sayi;
    if (sayi<0)
    {
        printf("pozitif tamsayi girin\n");
        return 1;
    }
    while (sayi>0)
    {
      int kalan= sayi%10 ;
      toplam = toplam+ (kalan* kalan* kalan);
      basamak++;
      sayi=sayi/10;

    }
     printf("%d sayinizin degeridir\n",toplam);
    if (sayi1==toplam)
    {
        printf("%d sayiniz armstrong bir sayidir\n",sayi1);
    }
    else
    {
        printf("%d sayiniz bir armstrong sayi degildir\n",sayi1);
    } 
    return 0;
 }
 
int main(){
    int sayi;
    printf("bir sayi girin\n");
    scanf("%d",&sayi);
    armstrong(sayi);
    return 0;
}