#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
int main (){
    int notes[5];
    notes[0]=6;
    notes[1]=13;
    notes[2]=51;
    notes[3]=23;
    notes[4]=16;
    int i,sum=0;
    sum=notes[4]+notes[2];
    printf("%d\n",sum);
    return 0;
}
//-------------------------------*/
/*
int main(){
    float ortalama,sayi[3];
    printf("uc sayi girin\n");
    scanf("%f %f %f",&sayi[0],&sayi[1],&sayi[2]);
    ortalama=(sayi[0]+sayi[1]+sayi[2])/3;
    printf("ortalamasi =%.2f\n",ortalama);
    return 0;
}
//--------------------------------*/
/*
int main(){
    int karesi[5];
    for (int i = 0; i < 5; i++)
    {
        karesi[i]=i*i;
        printf("%d nin karesi =%d\n",i,karesi[i]);
    }
    return 0;   
}
//-----------------------------*/
/*
int main(){
    int name[30];
    printf("ismini gir\n");
    gets(name); //burda ismimi sadece beyza yazicaksam scanf kullanabilirim ama beyza nur tezcan icin gets(name).
    printf("your name is %s\n",name);//beyza ya da beyza nur tezcan string bir ifadedir o yuzden %s.
    return 0;
}
//----------------------------*/
/*
int main(){
    int sayi[7];
    printf("dizinin sayilarini girin\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&sayi[i]);
    }
     printf("orijinal siralama=");
     for (int i = 0; i < 7; i++)
     {
        printf("%d",sayi[i]);
     }
    printf("\nters siralamasi=");
    for ( int i = 6; i >=0; i--)
    {
        printf("%d",sayi[i]);
    }
    return 0;
}
//-------------------------------*/
/*
int main() {
    int sayilar[] = {1, 2, 3, 4, 5};
    int toplam = 0;

    for (int i = 0; i < 5; i++) {
        printf("%d.elemanin karsiligi =%d\n",i+1,sayilar[i]);
        toplam += sayilar[i];
    }

    printf("Dizi Elemanlarinin Toplami: %d\n", toplam);

    return 0;
}
//-------------------------*/
/*
int main() {
    char harfler[] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < 5; i++) {
        printf("%d.terim =%c\n ",i+1, harfler[i]);
    }

    printf("\n");

    return 0;
}
//-------------------------------*/
/*

int main() {
    int numbers[] = {10, 5, 8, 15, 3};
    int max = numbers[0];

    for (int i = 1; i < 5; i++){
    printf("%d ",numbers[i]);}


    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("En Buyuk Eleman: %d\n", max);

    return 0;
}
//------------------------------*/
/*
int main() {
    int n;
    printf("Kac sayi gireceksiniz: ");
    scanf("%d", &n);

    int sayilar[n];
    int toplam = 0;

    printf("%d adet sayi girin:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sayilar[i]);
        toplam += sayilar[i];
    }

    float ortalama = toplam / n;
    printf("Ortalama: %.2f\n", ortalama);

    return 0;
}
//---------------------------------*/
/*
int main() {
    int n;
    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &n);

    int sayi[n];

    printf("Dizinin elemanlarini girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sayi[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sayi[i] == sayi[j]) {
                printf("yinelenen sayilar=\n");
                printf("%d ", sayi[i]);}
            else if (sayi[i]!=sayi[j]){
                printf("yinelenmeyen sayilar\n");
                printf("%d",sayi[i]); }
            
            }
            
        }
    
    
    return 0;
}
//---------------------*/
/*

int main() {
    int n;

    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &n);

    int sayi[n];

    printf("Dizinin elemanlarini girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sayi[i]);
    }

    printf("Tek sayilar: ");
    for (int i = 0; i < n; i++) {
        if (sayi[i] % 2 != 0) {
            printf("%d ", sayi[i]);
        }
    }

    printf("\nCift sayilar: ");
    for (int i = 0; i < n; i++) {
        if (sayi[i] % 2 == 0) {
            printf("%d ", sayi[i]);
        }
    }

    return 0;
}
---------------------------------------*/
/*
int main(){
    int sayi[5],temp;
    
    for(int i=0;i<5;i++){
        printf("%d. sayiyi giriniz :",i+1);
        scanf("%d",&sayi[i]);
    }
    
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
            if(sayi[i]<sayi[i+1]){
                temp=sayi[i];
                sayi[i]=sayi[i+1];
                sayi[i+1]=temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        printf("%d ",sayi[i]);
    }
}
//--------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed değerini güncelle
    srand(time(NULL));

    int numbers[20];

    // Diziye rastgele sayılar atama
    for (int i = 0; i < 20; i++) {
        numbers[i] = rand() % 99+1; 
    }

    printf("Rastgele Sayilar: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}


    
