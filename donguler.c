#include <stdio.h>
#include <stdlib.h>

int main()

{
// dongulerde 0 disinda her sayi true;0 ise false olarak kabul edilir
// true ise donguye girer false ise tepki vernmez
 /*int i=0;
 while (i<10)
 {
 printf("%d we started while cycle \n",i+1);
i++;
 } */

/* int i=1;
while (i<4)
{
 printf("i * %d=%d\t",i,2*i);
 printf("i * %d=%d\t",i,3*i);
 i++;
}*/

int i=1;
while(i<10){
    printf("while %d\n",i);
    i++;
}
printf("\n");

int a=100;
do{
    printf("do-while %d\n",a);
    a++;
} while(a<10);

/* dowhile dongusunun while dongusunden farki once yazip sonra donguyu durdurmasidir 
while dongusunde sartlar saglanmiyosa donguye girmez dowhileda dongu baslar ve durur*/

float sayi;
    char devam;
    float buyuk=0;
    do{
        printf("bir sayi girin \n");
        scanf("%f ",&sayi);
        if(sayi>buyuk){
            sayi=buyuk;
        printf("yeni buyuk sayimiz %f\n",buyuk);
            }
    else{
        printf("sayi degismedi, yeni sayimiz %f\n", buyuk);
    }
    printf("buyuk sayiyi hala hesaplmamk istiyor musunuz [e,E]\n");
    scanf(" %c",&devam);
}while(devam=='e'||devam=='E');
printf("program basariyla sonuclandi\n");
return 0;
}
