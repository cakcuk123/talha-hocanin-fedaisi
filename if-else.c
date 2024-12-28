#include <stdio.h>

int main() {
    int sayi;

    // Kullanıcıdan bir sayı alıyoruz
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    // Sayının pozitif mi negatif mi olduğunu kontrol ediyoruz
    if (sayi > 0) {
        printf("Girdiginiz sayi pozitif.\n");
    } else if (sayi < 0) {
        printf("Girdiginiz sayi negatif.\n");
    } else {
        printf("Girdiginiz sayi sifir.\n");
    }

    return 0;
}
