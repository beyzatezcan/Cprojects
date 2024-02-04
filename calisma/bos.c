#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int sinavsonuclari(){
    int toplam=0;


    int sonuc[20]={};
    for (int i = 0; i < 20; i++)
    {
        printf("%d. notu girin\n",i+1);
        scanf("%d",&sonuc[i]);
        toplam+=sonuc[i];
    }
        float ortalama=toplam/20;
        printf("ortalama= %f\n",ortalama);

        int max=sonuc[0];
        int min=sonuc[0];

        for(int i = 0; i < 20; i++){
        if (sonuc[i]>sonuc[0])
        {
            max=sonuc[i];}
            
        if (sonuc[i]<sonuc[0])
        {
            min=sonuc[i];
            
        }
        }
        printf("maksimum sonuc= %d\n",max);
        
        printf("minimum sonuc= %d\n",min);
        
    }
int main (){
    sinavsonuclari();
    return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int paraAt() {
    return rand() % 2; // 0: yazı, 1: tura
}

int main() {
    int yazıSayısı = 0;
    int turaSayısı = 0;

    // Rastgele yazı tura atma işlemi
    for (int i = 0; i < 100; i++) {
        if (paraAt() == 0) {
            printf("Yazı ");
            yazıSayısı++;
        } else {
            printf("Tura ");
            turaSayısı++;
        }
    }

    printf("\n\nToplam Yazı: %d\nToplam Tura: %d\n", yazıSayısı, turaSayısı);

    return 0;
}
    




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Rasgele sayı üretebilmek için seed ayarı

    int sayi1, sayi2, cevap;

    while (1) {
        // Rasgele iki 1 basamaklı sayı üret
        sayi1 = rand() % 10 + 1;
        sayi2 = rand() % 10 + 1;

        // Soruyu ekrana yazdır
        printf("%d kere %d kaçtır ?\n", sayi1, sayi2);

        // Kullanıcıdan cevap alınır
        printf("Cevap: ");
        scanf("%d", &cevap);

        // Cevabı kontrol et ve mesaj yazdır
        if (cevap == sayi1 * sayi2) {
            printf("Çok güzel!\n\n");
        } else {
            printf("Lütfen tekrar deneyin.\n");
        }
    }

    return 0;
}




#include <stdio.h>

// OBEB yineleme fonksiyonu
int obeb(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return obeb(y, x % y);
    }
}

int main() {
    int sayi1, sayi2;

    // Kullanıcıdan iki tamsayı girişi alınır
    printf("İki tamsayı giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    // Fonksiyonu çağır ve sonucu yazdır
    printf("OBEB: %d\n", obeb(sayi1, sayi2));

    return 0;
}
