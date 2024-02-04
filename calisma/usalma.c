#include <stdio.h>
float usalma(float taban, int us) {
    float sonuc = 1.0;
    if (us>0)
    {
     for (int i = 0; i < us; i++) {
        sonuc *= taban;
    }
    }
    else if (us<0)
    {
        for (int i = 0; i> us; i--)
        {
            sonuc=sonuc*(1/taban);
        }
    }
    else
    {
        sonuc==1;
    }
    
    
    printf("%.2f\n",sonuc);
}

int main() {
    float taban;
    int us;

    printf("Taban ve us girin: ");
    scanf("%f %d", &taban, &us);
    usalma(taban,us);

    return 0;
}
