#include <stdio.h>
#include <stdlib.h>

int main()
{
int secim;
printf("lutfen secim yapin\n");
printf("1.ilkbhr\n2.sonbhr\n3.yaz\n4.kis");
scanf("%d",&secim);
switch (secim)
{
case 1:printf("hava cok guzel"); break;
case 2:printf("hava serin"); break;
case 3:printf("hava cok sicak");break;
case 4:printf("hava cok soguk\n"); break;
default: printf("lutfen 1-4 arasinda secim yapin");

}

/*  Switch/case yapısında, programın kontrolünün ifadenin değerine göre 
case seçeneklerinden sadece birini çalıştırıp bundan sonra switch/case 
yapısını terketmesini istiyorsak bu durumda her case seçeneğinden
sonra break komutu yerleştirmeliyiz.*/

/* switch komutu
Switch Komutu birden fazla değerden seçim yapmak için kullanılabilecek
özel karar verme komutudur. İç içe fazla sayıda if..else komutunu
kullanmayı gerektiren durumlarda kullanılabilecek etkili bir karar verme
aracıdır.
switch(ifade){
case sabit_değer1: [Komut1;]
case sabit_değer2: [Komut2;]
case sabit_değer3: [Komut3;]
case sabit_değer4: [Komut4;]
case sabit_değer5: [Komut5;]
......
case sabit_değerN: [KomutN;]
default: [Komut;]
}  */








return 0;
}
