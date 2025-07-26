#include <stdio.h>

int main() {
    int usia;

    printf("Masukkan usia: ");
    scanf("%d", &usia);

    if (usia >= 0 && usia <= 12) {
        printf("Kategori: Anak-anak\n");
    } else if (usia >= 13 && usia <= 17) {
        printf("Kategori: Remaja\n");
    } else if (usia >= 18 && usia <= 59) {
        printf("Kategori: Dewasa\n");
    } else if (usia >= 60) {
        printf("Kategori: Lansia\n");
    } else {
        printf("Usia tidak valid\n");
    }

    return 0;
}
