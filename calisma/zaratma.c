#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int zarAtisSayisi, arananSayi, sayac = 0;

    // Seed değerini güncelle
    srand(time(NULL));

    // Kullanıcıdan zar atış sayısını ve aranan sayıyı al
    printf("Zar atis sayisini girin: ");
    scanf("%d", &zarAtisSayisi);

    printf("Aranan sayiyi girin (1-6 arasinda): ");
    scanf("%d", &arananSayi);

    // Zar atma simülasyonu
    for (int i = 0; i < zarAtisSayisi; i++) {
        int zar = (rand() % 6) + 1; // 1 ile 6 arasında rastgele sayı üret

        printf("Zar Atisi %d: %d\n", i + 1, zar);

        if (zar == arananSayi) {
            sayac++;
        }
    }

    // Sonuçları yazdır
    printf("%d kez %d geldi.\n", sayac, arananSayi);

    return 0;
}
