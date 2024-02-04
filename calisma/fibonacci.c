#include<stdio.h>
#include<stdlib.h>
/*
void fibonacci( int sayi){
    int birinci=1, ikinci=1, toplam;
    for (int i = 1; i <=sayi; i++)
    {
        printf("fibonacci dizisinin %d.elemani %d dir\n",i,birinci);
        toplam=birinci+ikinci;
        birinci=ikinci;
        ikinci=toplam;
    }
    
}
int main(){
    int sayi;
    printf("bir ust limit degeri girin\n");
    scanf("%d",&sayi);
    fibonacci(sayi);
    return 0;
}
//-------------------------------------------------------*/

void fibonacci( int birinci,int ikinci,int toplam){
    birinci=1,ikinci=1;
    for (int i = 1; i <=20; i++)
    {
        printf("fibonacci dizisinin %d.elemani %d dir\n",i,birinci);
        toplam=birinci+ikinci;
        birinci=ikinci;
        ikinci=toplam;
    }
    
}
int main(){
    fibonacci(0,0,0);
    return 0;
}