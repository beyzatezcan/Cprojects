#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int basamakdegerleritoplami(int sayi,int basamaktoplami,int a){

if(sayi>0){
    basamaktoplami=0;
    a=1;
for (int i = 1; i <= sayi; i++)
{
    printf(" %d. basamak degeriniz %d\n",i,a);
     basamaktoplami+=a;
    a=(a*10)+1;
}
printf("basamak degerleri toplaminiz %d\n",basamaktoplami);
}
else
{
  printf("pozitif bir deger girin\n");
}
}
int main()
{   
    int sayi;
    printf("sayi girin\n");
    scanf("%d",&sayi);
    basamakdegerleritoplami(sayi,0,0);
    return 0;
}
