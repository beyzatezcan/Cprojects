#include<stdio.h>
#include<math.h>
#include<stdlib.h>



/*int sayi1, sayi2;
printf("lutfen iki sayi giriniz");
scanf("%d%d",&sayi1,&sayi2);
int toplam;
toplam = sayi1 + sayi2;
printf("%d",toplam);*/
 

/*int sayi1, sayi2;
printf("lutfen iki sayi giriniz");
scanf("%d%d",&sayi1,&sayi2);
int ortalama;
ortalama = (sayi1 + sayi2)/2;
printf("%d",ortalama);*/

/*int a, b ,c; 
printf( "kullanicidan bir denklem katsayilarini alin");
scanf ("%d %d %d", &a,&b,&c);
int delta;
delta = (b*b)-4*a*c

if (delta < 0)
{
    printf (" the roots are imaginary");
}

)*/
//----------------------------------------------------------
/*int number; //problem1
printf("input a number\n");
scanf( "%d",&number);
if (number==0)
{
    printf("number is zero");
}
else if (number > 0)
{
    printf("number is positive");
}
else
{
    printf("number is negative");
} */

//--------------------------------------------------------------
/*int number; //problem2
printf("input a number\n");
scanf("%d",&number);
if (number % 2 == 0)
{
    printf("number is even");
}

else
{
    printf("number is odd");
} */
 
//---------------------------------------------------------------
/*int a, b, c; // problem3
printf("input three number\n");
scanf("%d %d %d",&a, &b, &c);
if (a > b && a > c)
{
    printf("the largest number is %d\n", a);
}
else if (b > a && b > c)
{
    printf("the largest number is %d\n", b);
}
else
{
    printf("the largest number is %d\n", c);
} */

//----------------------------------------------------------------

/*int fahrenheit,celsius; //problem4
printf("input a fahrenheit value\n");
scanf("%d",&fahrenheit);
celsius= (fahrenheit-32) * 5/9;
printf("celsius %d\n", celsius); */

//-----------------------------------------------------------------
/*int sayi, toplam ; problem5
sayi= 1;
toplam= 0;
while ( sayi <= 10)
{
   toplam= toplam+ sayi;  
   sayi++;
    
}
printf("sayilar toplami: %d", toplam);
*/
//-----------------------------------------------------------------
/*
int num,sum,N;
printf("input a number\n");
scanf("%d",&N);
if (N >0)
{
   num = 0;
   while (num <= N)
   {
     num ++;
    sum += num;


   }
   printf("1den N e kadar sayilarin toplami: %d\n",sum);

}
else if (N< 0)
{
    num= -1;
  while (num >= N)
  {
    num--;
    sum+= num;
    
  }
    printf("-1den N e kadar sayilarin toplami: %d\n", sum);
  }
 */
/*---------------------------------------------------------------------------------------
 
  int num1, num2,bolum, kalan; problem1
  printf("input two number\n");
  scanf("%d %d",&num1,&num2);
  bolum=num1/num2;
  kalan=num1%num2;
  printf("bolum: %d\n kalan: %d\n",bolum,kalan);
  ------------------------------------------------------------------------------------
  */
 /* problem2
 int day;
 printf("input a day number\n");
 scanf("%d",&day);
 switch (day)
 {
 case 1:
    printf("monday\n");
    break;
 case 2:
    printf("tuesday\n");
    break;
 case 3:
    printf("wednesday\n");
    break;
 default:
    break;
 }
----------------------------------------------------------------------------------------*/
/*char harf; problem3
printf("bir harf girin\n");
scanf("%c",&harf);
switch (harf)
{
case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': 
    printf("girilen harf unludur\n");
    break;

default:
    printf("girilen harf unsuzdur\n");
    break;
}
-----------------------------------------------------------------------------------------*/
/* int n=1; problem4
int h;
int carpim;
while (n<11)
{
    h=1;
    while (h<11)
    {
       carpim=h*n;
       printf("%d * %d = %d\n", h, n ,carpim);
       h++;
    }
    printf("\n");
    n++;
}
------------------------------------------------------------------------------------------*/
/*
int sayac, sayi,faktoriyel;  problem5
printf("bir sayi alin\n");
scanf("%d", &sayi);
sayac=1;
faktoriyel=1;
while (sayac<= sayi)
{
    faktoriyel=faktoriyel * sayac;
    sayac++;
}
    printf("%d",faktoriyel\n);
-------------------------------------------------------------------------------------------*/
/*
int number, sum, bolum, kalan; // dort basamakli sayinin rakamlari toplamini yazdir
sum=0;
printf("input a four digit number\n");
scanf("%d",&number); //4321

bolum=number / 1000; // 4
sum+=bolum; // 4

kalan=number % 1000; // 321
bolum=kalan /100; // 3
sum+=bolum; // 4+3

kalan=number % 100; // 21
bolum=kalan / 10; // 2
sum+= bolum; // 4+3+2

kalan= number % 10;// 1
bolum= kalan / 1; // 1
sum+= bolum; // 4+3+2+1
printf("the sum of number's digits is %d\n", sum);
------------------------------------------------------------------------------------------*/
// kapali bir kaptaki gazin basincini hesaplayin
// basinc=(mol sayisi *r sabiti * sicaklik)/ hacim
/*
float pressure , constantR;
int numberofmoles , volume , heat;
printf("input number of moles, volume, heat\n");
scanf("%d\t\t %d\t\t %d\t\t", &numberofmoles, &volume ,&heat);
constantR=0.82;
pressure=(numberofmoles *constantR* heat)/volume;
printf("the value of pressure: %f" ,pressure);

-------------------------------------------------------------------------------------*/
//enflasyon oraninda artan elektrik faturasi hesaplama
// fatura ucreti=harcanan elektrik * birim fiyat *abone ucreti
/*
    float eskifiyat, yenifiyat, enflasyon, eskiaboneucreti, yeniaboneucreti;
    int yeniokuma, eskiokuma, elektrikkullanimi, yenifatura;

    printf("Eski fiyatı, enflasyonu, eski abonelik ücretini, eski okumayı, yeni okumayi girin:\n");
    scanf("%f %f %f %d %d", &eskifiyat, &enflasyon, &eskiaboneucreti, &eskiokuma, &yeniokuma);

    yeniaboneucreti = eskiaboneucreti * (1 + enflasyon / 100); // enflasyon oranini belirtmek icin 
    yenifiyat = eskifiyat * (1 + enflasyon / 100);
    elektrikkullanimi = yeniokuma - eskiokuma;
    yenifatura = elektrikkullanimi * yenifiyat * yeniaboneucreti;

    printf("Yeni fatura ücreti: %d\n", yenifatura);
-------------------------------------------------------------------------------------*/
// girilen sayinin onlar ve birler basamagini bul
/*
int num, first, second;
printf("input a number\n");
scanf("%d",&num);

first=num % 10;
second= (num % 100) / 10;
printf("first digit is %d and second digit is %d\n", first, second);
--------------------------------------------------------------------------------------*/
//if else kisaltarak yazilmasi
/*
int score;
score=90;
(score<=60)? printf("you failed the exam\n"):printf("you passed the exam\n");
//burda ? isareti if, : isareti else temsil eder.
-------------------------------------------------------------------------------------*/
// basit bir kitap siparis ve indirim programi
/*
int bookprice, orderquantity,sale, newprice;
printf("input how many books you want to buy\n");
scanf("%d" , &orderquantity);
bookprice=10;

if (orderquantity<=0)
{
    printf("you dont have any sales\n");
}
else if (orderquantity > 50)
{
   printf("hey you win 30 percent sale\n");
   sale=bookprice*30/100;
   newprice= orderquantity * (bookprice-sale);
   printf("new price is %d\n", newprice);
}
else 
{
    printf(" hey you win 10 percent sale\n");
    sale=bookprice*10/100;
    newprice=orderquantity *(bookprice-sale);
    printf("new price is %d\n", newprice); 
}
----------------------------------------------------------------------------------------*/
//sayilarin max min degerini bulma uygulamasi
/*
int max, min, num1, num2, num3;
printf("input three number\n");
scanf("%d %d %d", &num1, &num2, &num3);
if (num1>num2 && num1>num3)
{
    max=num1;
}
else if (num2>num3 && num2>num1)
{
    max=num2;
}
else if (num3>num2 && num3>num1)
{
    max=num3;
}
else
{
    printf("no results\n");
    return 0; // return burda kullanilmayinca asagidaki printfi de yazdiriyor ve hatali sonuc veriyor eger sonuc yoksa return ile burda durmali
}

printf("the largest number is %d", max);
-------------------------------------------------------------------------------------------*/

//kenar uzunluklari verilen ucgenin hangi tur ucgen oldugunu soyleyen program
/*
int a, b, c ;
printf("input three value\n");
scanf("%d %d %d", &a,&b, &c);

if (a+b>c && a+c>b && b+c>a)
{
    if (a==b && b==c)
    {
        printf("triangle is equilateral\n");
    }
    else if (a==b || a==c || b==c)
    {
        printf("triangle is isosceles\n");
    }
    else
    {
        printf("triangle is variegedet\n");
    }
    
}
else
{
    printf("this is not triangle");
}
----------------------------------------------------------------------------*/

// girilen dort basamakli sayi abcd=(ab=cd)^2 sagliyor mu
/*
int num,ab, cd;
printf("input a four digit number\n");
scanf("%d", &num);
ab=num /100;
cd=num % 100;

if (num==(ab+cd)*(ab+cd))
{
  printf("num is specialnum\n");
}
else
{
    printf("num is not specialnum\n");
}
------------------------------------------------------------------------------*/
//girilen sayinin karekokunun tamsayi mi degil mi bakan program
/*
float num,squareRoot;
printf("input a number\n");
scanf("%f", &num);
if (num<0)
{
    printf("no results\n");

}
else
{
    squareRoot=sqrt(num); // sqrt (x) demek xin karekokunu al demektir
    if (num==squareRoot*squareRoot)
    {
        printf("square root of %f is integer\n", squareRoot);
    }
    else
    {
        printf("squre root of %f is not integer\n",squareRoot);
    }
    
}
------------------------------------------------------------------------------------*/
//bir gsm operatoru 4dkya kadar konusma ucretini 0.30tl olarak belirlemistir. ancak konusma suresi 4dkyi asarsa bundan sonraki her dk icin ek olarak 0,07 tl alinacaktir. telefon gorusmesinin suresini dakika cinsinden girdi olarak alan ve konusmanin ucretini hesaplayan program
/*
float time,price,newprice;
printf("input minute of call\n");
scanf("%f", &time);
price=0.30;
if (time<=4)
{
    printf("your price of call is %f\n", price);
}
else if (time>4)
{
    newprice=(time-4)*0.07;
   price=price+newprice;
    printf("your price of call is %f\n", price);
}
---------------------------------------------------------------------------------------*/
//girilen bir karakterin harf mi degil mi ve harfse buyuk mu kucuk mu oldugunu kontrol et
/*
char mychar;
printf("input a char\n");
scanf("%c", &mychar);

if (mychar>='A' && mychar<='Z') //KARAKTER YAZARKEN ONU TANIMLAMAZSIN VE KARAKTERI TIRNAGA ALIRSIN
{
    printf("%c is an uppercase letter\n",mychar);
}
else if (mychar>='a' && mychar<='z')
{
    printf("%c is a lowercase letter\n", mychar);
}
else
{
    printf("%c is not a letter\n", mychar);
}
---------------------------------------------------------------------------------------*/
// switch case yapilarina ornek
//x==7 ? 19: (y==12? 10: -90);
/*
int x,y,z;
x=0;
y=18;
switch (x)
{
case 7:
    z=19;
    break;
default: 
switch (y)
{
case 12:
    z=10;
        break;

default: z=-90;
    break;
}
 break; //Yani, içteki switch bloğu bitince, içteki default durumunun ardından gelen break; ifadesi, içteki switch bloğundan çıkış yapar ve dıştaki switch bloğunun default durumunu engeller.
}
printf("%d\n",z); 
------------------------------------------------------------------------*/
//gun sonunda kac urun satildigi verilen tabloya gore girilen gune kadar toplam kac urun satildigini veren program
// mon5 tue7 wed9 thu3 fri2
/*
int numberofproducts, day;
char *dayname;
numberofproducts=0;
day=0;

printf("input a number of day(1-5)\n");
scanf("%s",&dayname);
switch (day)
{
case 5: numberofproducts+=2;
       if(day==5){
        dayname='fri';
        }
    
case 4: numberofproducts+=3;
       if (day==4){dayname='thu';}
case 3: numberofproducts+=9;
       if(day==3){dayname='wed';}
case 2: numberofproducts+=7;
       if(day==2){dayname='tue';}
case 1: numberofproducts+=5;
       if(day==1){dayname='mon';}


}
printf("finally of %s day,sum of products %d", dayname, numberofproducts);

------------------------------------------------------------------------------*/
// girilen sayinin karesini alan fonksiyon
/*
int square(int n)
{
    int result=0;
    result= n * n; 
    return result;
}
int main()
{
    int n;
    printf("\n input the number:");
    scanf("%d",&n);
    printf("\n square of : %d", square(n));
}
-----------------------------------------------------------------------------*/
//tek mi cift mi sayi oldugunu bulan fonksiyon
/*
int isEven(int n)
{
    if (n%2==0)
     return 1;
     else
     return 0;
     
}


int main()
{
    int n=0;
    printf("\ninput the number:");
    scanf("%d",&n);
    int r= isEven(n);
    if (r)
    printf("\n %d is even", n);
    else
    printf("\n %d is odd",n);
    
}
------------------------------------------------------------------------------*/
// girilen n sayisinin faktoriyelini yazdir
/*
int faktoriyel(int n)
{
    int sonuc=1;
    for(int i=1;i<=n;i++)
     sonuc*=1;
     return sonuc;
}

float secileneleman(int i)
{
    float sonuc= faktoriyel(i)/i;
    return sonuc;
}
int main()
int ...
-----------------------------*/
//desimal sayiyi binarye ceviren program
//--------------------------------------------------------------------

//FUNCTIONS
/*
 void myMessage(){
    printf("now i can write a function\n");// fonksiyonlarda verilen fonksiyon cagirilmadikca calismaz burda verdigimiz     fonkyonu asagida main fonksiyonuyla cagiriiyoruz ve sadece printfle verdigimiz icin void yani geriye dondurmeyen fonksyion kullaniyoruz.
     }
int main(){
    myMessage();// burda fonksyonu cagiriyoruz ayrica bu fonksyonu bes kere yazarsak bes kere cagirir ve yazdirir
    return 0;
}
-----------------------------------------------------------------------------*/
// fonksiyon ornegi
/*
void namelist(char name []){
    printf("hello %s\n",name);
}
int main(){
    namelist("beyza"); // '' tek tirnak degil "" cift tirnak kullanilir cunku string(karakter dizisi) ifade giriyoruz karakter degil
    return 0;
}
---------------------------------------------------------------------------*/
//yas ve isim yazan fonskyon ornegi
/*
void namelist( char name[],int age){
    printf("%s your age is %d\n",name,age);
}
int main(){
    namelist("beyza",20);//burda metinsel string ifadelere cift tirnak kullaniyoruz int degerlere kullanilmaz
    namelist("ayse",35);//yukardaki fonksyonla asagidaki deger sirasi birebir olmalidir
    namelist("mehmet",40);
    return 0;
    
}
------------------------------------------------------------------------------------*/
/*
int showme(int x){
    return 5+x;
}
int sumnumbers(int x, int y){
    return x+y;
}
int cikarma(int x, int y){
    return x-y;
}
int main(){
   // printf("result is %d",showme(7));//burda iceri girilen degeri ustteki returnde yazarak donduruyor
   // printf("sum of numbers %d",sumnumbers(3,7));
   //int mynumber = sumnumbers(3,5)*7;
   // int mynumber= (sumnumbers(6,8)-2);
   printf("result: %d", mynumber);
    return 0;

}
-------------------------------------------------------------------------------------*/
//recursion function
// 1den n'e kadar sayilarin toplami
/*
int sumnumber(int i){
    if (i>0)
    {
        return i+ sumnumber(i-1);
    }
    else
    {
        return 0;
    }
    
}
int main(){
    int result=sumnumber(50);
    printf("%d\n",result);
    return 0;
}
--------------------------------------------------------------------------------------*/
// fonksyonlarda us alma


float usAlma(float taban, int us) {
    float result = 1.0;  // Sonucu ondalık sayı olarak tutmalısınız

    if (us < 0) {
        for (int i = 0; i <= -us; ++i) {
            result /=  taban;  // Kesirli ifadeyi ondalık olarak yazmalısınız
            
                 }
    } else if (us > 0) {
        for (int i = 0; i < us; ++i) {
            result *= taban;
        }
    } else {
        printf("Result is 1.0\n");
        return 1.0;  // us = 0 ise 1 döndür
    }

    return result;
}

int main() {
    float taban, result;
    int us;

    printf("Taban ve üs değerlerini girin: ");
    scanf("%f %d", &taban, &us);

    result = usAlma(taban, us);

    printf("Result: %f\n", result);

    return 0;
}
//-----------------------------------------------------------------------------------*/
// karesini alma fonksyonu
/*
int kareAl(int sayi)
{
    int kare =0;
    kare = sayi * sayi ;
    return kare;
}
int main() {
    int sayi, result;

   // printf("sayi gir\n");
   // scanf("%d",&sayi);

    //printf("karesi;%d\n",kareAl(sayi));
    result = kareAl(7);
    printf("%d",result);


    return 0;
} */
//----------------------------------------------------------------------------
/*
int swap(int *sayi1, int *sayi2)
{
    int sys = *sayi1;
    *sayi1 = *sayi2;
    *sayi2 = sys;
    printf("ikinci durum sayi1:%d   ,  sayi2:%d\n",*sayi1, *sayi2);
    return sayi1, sayi2 ;
}

int main() {
    int sayi1 = 5, sayi2 = 9;

    printf("ilk durum sayi1:%d   ,  sayi2:%d \n",sayi1, sayi2);

    swap(&sayi1,&sayi2);

    printf("ikinci durum sayi1:%d   ,  sayi2:%d",sayi1, sayi2);
    return 0;
}
-----------------------------------------------------------------*/
/* int main(){
int sayi;
scanf("%d", &sayi);

int i = 0;
while(i < 10)
{
    if((i % 2) == 0)
    {
        printf("%d ", i*sayi);
    }
    i = i + 1;
}

return 0;
}
*/
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
}*/

