
#include <stdio.h>

int main() {
    int angka[10], i;
    int max, min, total = 0;
    float rata;

    printf("Masukkan 10 angka:\n");
    for (i = 0; i < 10; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);

        // Inisialisasi untuk pertama kali
        if (i == 0) {
            max = min = angka[i];
        }

        // Cari max dan min
        if (angka[i] > max) max = angka[i];
        if (angka[i] < min) min = angka[i];

        total += angka[i];
    }

    rata = total / 10.0;

    printf("\nNilai maksimum: %d\n", max);
    printf("Nilai minimum: %d\n", min);
    printf("Rata-rata: %.2f\n", rata);

    return 0;
}
