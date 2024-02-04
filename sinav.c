#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int main() {
    int toplam = 0;
    int sayac = 0;
    int ogrenciNotu;

    while (sayac < 10) {
        printf("Notu girin (sonlandirmak icin -1 girin): ");
        scanf("%d", &ogrenciNotu);

        if (ogrenciNotu == -1) {
            break;  // -1 girilirse döngüden çık
        }

        toplam += ogrenciNotu;
        sayac++;

        if (sayac == 10) {
            break;  // 10 not alındığında döngüden çık
        }
    }

    if (sayac != 0) {
        float ortalama = (float)toplam / sayac;
        printf("Sinif ortalamasi: %.2f\n", ortalama);
    } else {
        printf("Hicbir not degeri girilmedi!\n");
    }

    return 0;
}
------------------------------------------------------------------*/
/*
// Code 3.6.1: Code3_6_1.c
// Bir sayının palindromik olup olmadığının bulunması

#include <stdio.h>

int main()
{
    int sayi;
    printf("Lutfen 5 haneli bir sayi girin: ");
    scanf("%d", &sayi);

    int geciciSayi = sayi;
    int tersSayi = 0;

    while(geciciSayi != 0)
    {
        tersSayi *= 10;
        printf("%d\n",tersSayi);
        tersSayi += geciciSayi % 10;
        geciciSayi /= 10;
    }

    tersSayi == sayi ? puts("Palindromik Sayidir!") : puts("Palindromik Sayi Degildir!");

    return 0;
}-------------------------------------------------------------------------*/
/*
// Code 4.1.1: Code4_1_1.c
// Arttırma ve azaltma operatörleri örneği

#include <stdio.h>

int main()
{
    int sonuc = 1;

    int n;
    printf("Faktoriyeli alinacak sayiyi girin: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sonuc *= i;
    }
    
    printf("%d! = %d\n", n, sonuc);    

    return 0;
}------------------------------------------------------------------------*/
// Code 4.2.1: Code4_2_1.c
// 0'dan 16'ya kadar olan sayıların belli tabanlarda (8, 10, 16) tabloya dökülmesi

/*
int main()
{
    puts("10'luk | 8'lik | 16'lik");
    puts("-----------------------");
    for(int i = 0; i <= 16; i++)
    {
        printf("%6d | %5o | %6X\n", i, i, i);
    }

    return 0;
}
----------------------------------------------------------------------------------- */
/*
int main() {
    // for döngüsü kullanarak 1'den 10'a kadar olan sayıları yazdır
    for (int i = 1; i <= 10; ++i) {
        printf("%d ", i);
    }

    return 0;
}
--------------------------------------------------------------------------------------*/
//toptanci hesaplamasi
/*
int main(){
  int miktar,ucret;
 
  printf("miktar ve ucret girin\n");
  scanf("%d %d",&miktar, &ucret);
   int toplam = miktar*ucret;

  if (0<miktar&& miktar<=100)
  {
    printf("yeni ucret %d",toplam-((10*toplam)/100));
  }
  else if (100<miktar&& miktar<=300)
  {
    printf("yeni ucret %d",toplam-(20*toplam/100));
  }
  else if (300<miktar)
  {
    printf("yeni ucret %d",toplam-(30*toplam/100));
  }
  else
  {
    printf("gecerli bir miktar girin");
  }
   return 0;
  -----------------------------------------------------------------------------*/
//girilen karakterin ASCII degerini gosteren program
/*
int main(){
    char karakter;
    printf("bir karakter girin\n");
    scanf("%c",&karakter);
     int deger= karakter;
  //printf("karakteriniz %c ve ASCII degeri %d", karakter,karakter);
  if (65<=deger && deger<=90)
  {
    printf("ASCII degeri %d olan %c karakteriniz buyuk harflidir",karakter,karakter);
  }
  else if (97<=deger && deger<=122)
  {
    printf("ASCII degeri %d olan %c karakteriniz kucuk harflidir",karakter, karakter);
  }
  else
  {
    printf(" gecerli bir karakter girin");
  }
  
  return 0;  
}
-------------------------------------------------------------------------------------*/
//switch case yapisiyla girilen sayinin hangi ay ve mevsim oldugunu soyleyen program

//int main(){
    /*
    int aynumarasi;
    char mevsim;
printf("1-3 arasi bir numara girin\n");
scanf("%d",&aynumarasi);

switch (aynumarasi)
{
case 1:
    mevsim='k';
    printf("%d ay ocak, mevsim %s",aynumarasi,mevsim);
    break;
case 2:
    mevsim='k';
    printf("%d ay subat, mevsim %c",aynumarasi,mevsim);
    break;
case 3: 
    mevsim='i';
    printf("%d ay mart, mevsim %c",aynumarasi,mevsim);
    break;
default:
    printf("1-3 arasi sayi girin");
    break;
}
-----------------------------------------------------------------*/
// sonsuz defa hesap yapan hesap makinesi*******************************************************
/*
float sayi1,sayi2;
menu: printf("islem iki sayi girin\n");
scanf("%f %f",&sayi1,&sayi2);
int islem;
printf("1.toplama\n2.cikarma\n3.carpma\n4.bolme\n5.kokalma\n6.kuvveti\n bir islem secin\n");
printf("cikmak isterseniz -1'e basin\n");
scanf("%d",&islem);
if (islem==-1)
{
    goto cikis;
}


switch (islem)
{
case 1:
     printf("islem :%f\n",sayi1+sayi2);
   break;
case 2:
   printf("islem :%f",sayi1-sayi2);
  break;
case 3:
    printf("islem :%f",sayi1*sayi2);
    break;
case 4:
     printf("islem :%f",sayi1/sayi2);
    break;
case 5:
     printf("islem :%f ve %f",sqrt(sayi1),sqrt(sayi2));
    break;
case 6:
     printf("islem :%f",pow(sayi1,sayi2));
    break;
default:
    printf("gecerli bir islem numarasi girin\n");
    break;
}
goto menu;
cikis:printf("islem sona erdi hoscakal..")
-----------------------------------------------------------------*/
//kafe menusu programi ********************************************************
/*

printf("kahveler\tsiparis no\tucret\n");
printf("latte\t\t1\t\t50tl\n");
printf("americano\t2\t\t65tl\n");
printf("kapicino\t3\t\t75.5tl\n");
int siparisno;
menu:
printf("almak istediginiz kahvenin numarasini girin\n");
printf("menuden cikmak isterseniz -1'e basin\n");

if (siparisno== -1)
{
    goto cikis;
}
scanf("%d",&siparisno);

float toplam;
if(1<=siparisno && siparisno<=3){

  switch (siparisno)
{
case 1:
    toplam+=50;
    break;
case 2:
    toplam+=65;
    break;
case 3:
    toplam+=75.5;
    break;    
default:
    printf("1-3 arasinda degerler giriniz\n");
    break;
 
}
printf("toplam ucret: %.2f\n",toplam);
}
goto menu;
cikis:
printf("siparisiniz tamamlandi\n");
printf("toplam tutar %.2f\n",toplam);
------------------------------------------------------------------------*/
// girilen iki sayi arasindaki sayilarin toplami
/*
int sayi1, sayi2,kucuk,buyuk;
int toplam =0;
printf("kacla kac arasinin toplamini istiyorsunuz?\n");
scanf("%d %d",&sayi1, &sayi2);
  if (sayi2>sayi1){
   buyuk=sayi2;
   kucuk=sayi1;
    while (sayi1<=sayi2)
  {
    toplam+=sayi1;
     sayi1++;
  }
}
else if (sayi1>sayi2)
{   buyuk=sayi1;
    kucuk=sayi2;
    while (sayi2<=sayi1)
    {
        toplam+=sayi2;
        sayi2++;
    }
    
}
printf("%d ile %d arasindaki sayilarin toplami: %d\n",kucuk,buyuk,toplam);
----------------------------------------------------------------------------------*/
//while dongusu ile faktoriyelini alma
/*
int sayi,faktoriyel=1;
printf("faktoriyelini almak istediginiz sayiyi girin\n");
scanf("%d",&sayi);
if (sayi==0 || sayi==1)
{
    printf("faktoriyel: 1\n");
}
else if (sayi>0)
{   int i=1;
    while (i<=sayi)
    {
        faktoriyel *= i;
        i++; 
    }
 printf("%d sayinizin faktoriyeli :%d\n",sayi, faktoriyel);
}
else
{
   printf("lutfen sadece pozitif tam sayi girin\n");
}
-------------------------------------------------------------*/
//girilen sayiyi onceki sayiyla karsilastiran program
/*

int sayi,ilksayi=5;
char secim;
printf("sayi girin\n");
scanf("%d",&sayi);

do
{
    if (sayi>ilksayi)
    {
        ilksayi=sayi;
        printf("yeni sayiniz :%d\n",sayi);
    }
    else if (sayi<=ilksayi)
    {
        printf("sayiniz degismedi\n");
    }
    
 printf("yeni sayi girmek istiyor musunuz? (E/H)\n");
 scanf(" %c",&secim);
 if (secim=='e' || secim=='E' )
 {
    printf("yeni sayi girin");
    scanf("%d", &sayi);
 }
 
 }
 
while (secim=='E' || secim=='e'); 
printf("program basariyla sonuclandi");

------------------------------------------------------------*/
//girilen sayinin kac basamakli ve basamak degerleri toplamini veren program
/*
int sayi, basamak=0,toplam=0;
printf("sayi girin\n");
scanf("%d",&sayi);
if(sayi>=0){
int orijinal=sayi;
do
{
    toplam+=sayi%10;
    basamak++;
    sayi=sayi/10;
} while (sayi>0);

printf("%d sayiniz %d basamakli ve basamak degerleri toplami : %d\n",orijinal, basamak,toplam);}
else
{
    printf("lutfen pozitif tamsayi girin");
}
--------------------------------------------------------------*/
//kullanicinin girdigi iki sayinin ebobunu bulan program

  /* 
    int sayi1, sayi2, ebob, kalan;

    // Kullanıcıdan iki pozitif tamsayıyı alma
    printf("İki sayı girin:\n");
    scanf("%d %d", &sayi1, &sayi2);

    // Girdilerin kontrolü
    if (sayi1 <= 0 || sayi2 <= 0) {
        printf("Lütfen pozitif tamsayılar girin.\n");
        return 1; // Hata kodu ile programdan çıkış
    }

    // EBÖB hesaplama
    do {
        kalan = sayi1 % sayi2;
        sayi1 = sayi2;
        sayi2 = kalan;
    } while (kalan != 0);

    ebob = sayi1;

    // Sonucu ekrana yazdırma
    printf("Girilen sayıların en büyük ortak böleni (EBÖB): %d\n", ebob);
    ------------------------------------------------------------------------*/
    /*
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (i%2==0)
        {
            printf(" cift sayilar%d\n",i);
            continue;
        }
      printf("tek sayilar %d\n",i);    
    } 
    ------------------------------------------------------------------------*/
    /*
    #include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void diziYaz()
{
    int dizi[] = {1,2,3};
    printf("\n\nDiziYaz fonksiyonu cagrildi:");
    for(int i = 0;i<3;i++)
        printf("\ndizi[%d] = %d",i,dizi[i]);

    printf("\n-----------------------");
    for(int i = 0;i<3;i++)
    {
        dizi[i]+=5;
        printf("\ndizi[%d] = %d",i,dizi[i]);
    }


}

void diziYazStatik()
{
    static int dizi[] = {1,2,3};
    printf("\n\nDiziYaz fonksiyonu cagrildi:");
    for(int i = 0;i<3;i++)
        printf("\ndizi[%d] = %d",i,dizi[i]);

    printf("\n-----------------------");
    for(int i = 0;i<3;i++)
    {
        dizi[i]+=5;
        printf("\ndizi[%d] = %d",i,dizi[i]);
    }

}


int main()
{
    char isim[50];

    printf("Isim: ");
    scanf("%s",isim);

    //printf("\n\n%s",isim);

    for(int i = 0; isim[i]!='\0';i++)
        printf("%c",isim[i]);



//    char stringDizisi1[] = "Merhaba";
//    char stringDizisi2[] = {'M','e','r'};
//
//    //printf("\n%s",stringDizis1);
//    printf("\n%s",stringDizisi2);
//
//    for(int i = 0;stringDizisi1[i]!='\0';i++)
//    {
//        printf("\n%c",stringDizisi1[i]);
//    }
//    int Oylamalar[10]={3,5,1,4,4,2,3,4,2,1};
//    int Puanlar[6] = {0};
//
//    for(int i = 0; i<10;i++)
//        ++Puanlar[Oylamalar[i]];
//
//    for(int i = 1;i<6;i++)
//    {
//        printf("\n%d yildiz verenlerin sayisi : %d",i,Puanlar[i]);
//    }
//    printf("\n");
//    for(int i = 1;i<6;i++)
//    {
//        printf("\n%d yildiz : ",i);
//        for(int j = 0;j<Puanlar[i];j++)
//            printf("*");
//    }

//    diziYaz();
//    diziYazStatik();
//
//    diziYaz();
//    diziYazStatik();

//    int not = 3;
//    int Notlar[SIZE]={50,62,70,80,95};



//    for(int i = 0;i<5;i++)
//    {
//        printf("\n%d. Ogrenci Notunu Giriniz: ",i+1);
//        scanf("%d",&Notlar[i]);
//    }


//    for(size_t i = 0;i<SIZE;i++)
//    {
//        printf("\nDizi[%d] = %d",i,Notlar[i]);
//    }
//
//    float ortalama =0;
//    int toplam = 0;
//    for(int i = 0;i<SIZE;i++)
//    {
//        toplam += Notlar[i];
//    }
//
//    printf("\n\tNot ortalamasi : %.2f",(float)toplam/SIZE);
    return 0;
}
-----------------------------------------------------------------*/
/*
void tekmiciftmi(int sayi){
    if (sayi%2==0)
    {
        printf("sayi cifttir");
    }
    else
    {
        printf("sayi tektir");
    }
    
}
int main(){
    tekmiciftmi(6);

return 0;

}
*/

int tekmiciftmi(int sayi){
   if (sayi%2==0) 
    {
        printf("%d cifttir",sayi);
    }
    else
    {
        printf("%d tektir",sayi);
    } 
}
int main(){
    int kullanicisayisi;
    printf("sayi girin\n");
    scanf("%d",&kullanicisayisi);
    tekmiciftmi(kullanicisayisi);
    return 0;
}
//-------------------------------------------*/
/*
void tekmiciftmi(int sayi){ // atanan degeri ve sonucu direkt ekrana yazdirdigi icin sonucu dondurmedigi icin    void kullandim.
    sayi=200;
    for (int i = 0; i <= sayi; i++)
    {
        if (i%2==0)
        {
            printf("%d cifttir\n",i);
        }
        else
        {
            printf("%d tektir\n",i);
        }
        
    }
    
}
int main(){
    int verilensayi;
    tekmiciftmi(verilensayi);
    return 0;
}
-------------------------------------------------*/
/*
float celcius(float fahrenheit){
    return (fahrenheit-32)/1.8;}
float fahrenheit(float celcius){
    return(celcius*1.8)+32;
}
int main(){
   
    float deger;
    printf("cevirmek istediginiz degeri girin\n");
    scanf("%f",&deger);
    printf("%.f degerinin celcius degeri: %f\n",deger,celcius(deger));// .f sifirsiz .1f tek sifirli
    printf("%.1f degerinin fahrenheit degeri: %f\n",deger,fahrenheit(deger));
    return 0;
} 
-----------------------------------------------*/
/*
float celcius(float fahrenheit){
    return (fahrenheit-32)/1.8;}
float fahrenheit(float celcius){
    return(celcius*1.8)+32;
}
int main(){
    for (int i = 32; i <=212; i++)
    {
        printf("%d fahrenheit =%f celcius\n",i,celcius(i));
    }
    for (int i = 0; i <=100; i++)
    {
        printf("%d celcius=%f fahrenheit\n",i,fahrenheit(i));
    }
    return 0;
}
----------------------------------------------------*/
//1-1000 arasindaki aasal sayilari yazdiran program
/*
int asalmi(int sayi){
    if (sayi==1)
    {
        return 0;
    }
    for (int carpan = 2; carpan<=sayi/2; carpan++)
    {
       if (sayi%carpan==0)
       {
        return 0;
       }
       else
       {
       return 1;
       }
       
    }
    }

int main(){
    int sayi;
 for (sayi = 1; sayi<= 1000; sayi++)
 {
   if (asalmi(sayi)) {
    printf("%d asal\n", sayi);
} else {
    printf("%d asal değil\n", sayi);
}

   
 }
 
 return 0;
    
} */






  





