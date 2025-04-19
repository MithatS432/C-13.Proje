#include <stdio.h>

void degerDegistir(int *ptr) {
    *ptr = 50;  // pointer ile deðeri deðiþtiriyoruz
}

int main() {
    int sayi = 10;
    int *ptr = &sayi;  // Pointer nedir ve adres atama
    int *nullPtr = NULL;  // NULL pointer örneði

    printf("sayi: %d\n", sayi);
    printf("ptr'nin gosterdiði deger: %d\n", *ptr);

    // Pointer ile deðiþkeni deðiþtirme
    *ptr = 25;
    printf("Sayi'nin yeni degeri (pointer ile): %d\n", sayi);

    // Fonksiyona pointer ile parametre geçirme
    degerDegistir(ptr);
    printf("Sayi'nin fonksiyondan sonraki degeri: %d\n", sayi);

    // NULL pointer kontrolü
    if (nullPtr == NULL) {
        printf("nullPtr bos bir pointer.\n");
    }

    return 0;
}
