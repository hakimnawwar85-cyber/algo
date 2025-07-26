#include <stdio.h>
#define PI 3.14159


float hitungLuas(float r) {
    return PI * r * r;
}


float hitungKeliling(float r) {
    return 2 * PI * r;
}


void tampilkanHasil(float r) {
    printf("Jari-jari: %.2f\n", r);
    printf("Luas lingkaran   = %.2f\n", hitungLuas(r));
    printf("Keliling lingkaran = %.2f\n", hitungKeliling(r));
}

int main() {
    float jariJari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    tampilkanHasil(jariJari);

    return 0;
}
