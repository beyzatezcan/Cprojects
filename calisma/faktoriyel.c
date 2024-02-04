#include<stdio.h>
#include<stdlib.h>
/*
int faktoriyel(int sayi){
if (sayi<0)
{
    printf("pozitif tam sayi girin");
}
else
{

    int faktoriyel=1;
    for (int i = 1; i <= sayi; i++)
    {
        faktoriyel*=i;
    }
    printf("%d sayisinin faktoriyeli= %d\n",sayi,faktoriyel);
    
}
}
int main(){
    int sayi;
    printf("bir sayi girin\n");
    scanf("%d",&sayi);
    faktoriyel(sayi);
}
//----------------------------------------------*/

int faktoriyel(int sayi){
 for (sayi= 0; sayi <= 10; sayi++)
 {
    int faktoriyel=1;
    for (int i = 1; i <= sayi; i++)
    {
        faktoriyel*=i;
    }
     printf("%d sayisinin faktoriyeli= %d\n",sayi,faktoriyel);
 }

 
    
}
int main(){
    int sayi;
    faktoriyel(sayi);
}