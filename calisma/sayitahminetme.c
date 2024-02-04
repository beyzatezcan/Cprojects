#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
int main(){
    int i,number=0;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        number=rand()%10+1;/* burda i<10 deseydik 0dan baslayip 9a kadar rastgele saylar verirdi 10+1 yazinca 1den baslayip 10a kadar 10 dahil rastgele sayilar yazdirir.
    
        printf("%d. rastgele sayi= %d\n",i , number);
    }
    return 0;
}
//-------------------------------------------*/
int main(){
    int rastgelesayi,tahminsayisi,tahminsayaci=0,skor=100;
    srand(time(NULL));
    rastgelesayi=rand()%100+1;
    printf("1-100 arasinda bir sayi tuttum tahmint et\n");
 while (tahminsayisi!=-1)
 {
    printf("tahmin sayisini gir\n");
    scanf("%d",&tahminsayisi);
    if (tahminsayisi==-1) break;
    if (tahminsayisi<1 && tahminsayisi>100)
    {
       printf("1-100 arasinda sayi gir\n"); 
       continue;
    }
    tahminsayaci++;
    if (tahminsayisi==rastgelesayi)
    {
        printf("tebrikler %d.denemede %d sayisini buldunuz\n",tahminsayaci,rastgelesayi);
        break;
    }
    else
    {
        if (tahminsayisi>rastgelesayi)
        {
            printf("daha kucuk bir sayi girin\n");
        }
        else
        {
            printf("daha buyuk bir sayi girin\n");
        }
        skor-=10;
        
    }
    if (skor<0)
    {
        skor=0;
      printf("skorunuz %d\n",skor);
    }
    else
    {
      printf("skorunuz %d\n",skor);
    }
    
 }
 
}
