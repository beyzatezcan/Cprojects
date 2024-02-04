#include<stdio.h>
#include<stdlib.h>
/*
int mukemmelsayi(int toplam){
    for (int i = 1; i <=1000; i++)
    {   toplam=0;
        for ( int a = 1; a <=i/2; a++)
        {
            if(i%a==0){
                toplam+=a;
            }
        }
        if (toplam==i){
        printf("%d mukemmel sayidir\n",i);
        }
        
    }
     }
int main(){
    mukemmelsayi(0);
return 0;
}
 ---------------------------------------------------*/
 int mukemmelsayi(int toplam, int kullanicisayisi){
    for (int i = 1; i <=kullanicisayisi; i++)
    {   toplam=0;
        for ( int a = 1; a <=i/2; a++)
        {
            if(i%a==0){
                toplam+=a;
            }
        }
        if (toplam==i){
        printf("%d mukemmel sayidir\n",i);
        }
        
    }
     }
int main(){
    int kullanicisayisi;
    printf("bir ust deger girin\n");
    scanf("%d",&kullanicisayisi);
   mukemmelsayi(0,kullanicisayisi);
    
return 0;
}
    
    
   
    
