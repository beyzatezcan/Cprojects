#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
int faktoriyel(int sayi){
    if (sayi>0)
    {
        return sayi* faktoriyel(sayi-1);
    }
    else
    {
       return 1; 
    }
}
int main(){
    int sayi;
    printf("sayi girin\n");
    scanf("%d",&sayi);
    if (sayi>0)
    {
       printf("%d sayisinin faktoriyeli= %d",sayi, faktoriyel(sayi));
    }
    else
    {
        printf("pozitif tamsayi girin");
    }
    
    
    
    return 0;
}
//-----------------------------------*/
/*
float usAlma(float taban, int us) {
    if (us == 0) {
        return 1;
    } else {
        return taban * usAlma(taban, us - 1);
    }
}

int main() {
    float taban;
    int us;

    printf("Taban ve us girin (örneğin, 2 3): ");
    scanf("%f %d", &taban, &us);

    printf("%.1f^%d = %.1f\n", taban, us, usAlma(taban, us));

    return 0;
}
//-----------------------------------*/
#include <stdio.h>


int ebob(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return ebob(b, a % b);
    }
}

int ekok(int a, int b) {
    return (a * b) / ebob(a, b);
}

int main() {
    int a,b;

    printf("İki sayıyı girin: ");
    scanf("%d %d", &a, &b);


    
    //int sonuc_ekok = ekok(sayi1, sayi2);

    printf("EBOB(%d, %d) = %d\n",a,b, ebob(a,b));
    //printf("EKOK(%d, %d) = %d\n", sayi1, sayi2, sonuc_ekok);

    return 0;
}

