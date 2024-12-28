#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Kullanıcıdan ilk sayıyı al
    printf("Birinci sayiyi girin: ");
    scanf("%f", &num1);

    // Kullanıcıdan ikinci sayıyı al
    printf("Ikinci sayiyi girin: ");
    scanf("%f", &num2);

    // Kullanıcıdan işlem türünü al
    printf("Yapmak istediginiz islemi secin (+, -, *, /): ");
    scanf(" %c", &operator);
