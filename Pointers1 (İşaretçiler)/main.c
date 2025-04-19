#include <stdio.h>

void degerDegistir(int *ptr) {
    *ptr = 50;  // pointer ile de�eri de�i�tiriyoruz
}

int main() {
    int sayi = 10;
    int *ptr = &sayi;  // Pointer nedir ve adres atama
    int *nullPtr = NULL;  // NULL pointer �rne�i

    printf("sayi: %d\n", sayi);
    printf("ptr'nin gosterdi�i deger: %d\n", *ptr);

    // Pointer ile de�i�keni de�i�tirme
    *ptr = 25;
    printf("Sayi'nin yeni degeri (pointer ile): %d\n", sayi);

    // Fonksiyona pointer ile parametre ge�irme
    degerDegistir(ptr);
    printf("Sayi'nin fonksiyondan sonraki degeri: %d\n", sayi);

    // NULL pointer kontrol�
    if (nullPtr == NULL) {
        printf("nullPtr bos bir pointer.\n");
    }

    return 0;
}
