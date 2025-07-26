#include <stdio.h>

int main() {
    int i, nilai;

    // Ulangi sebanyak 5 kali untuk 5 mahasiswa
    for (i = 1; i <= 5; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i);
        scanf("%d", &nilai);

        if (nilai >= 60) {
            printf("Mahasiswa ke-%d: LULUS\n", i);
        } else {
            printf("Mahasiswa ke-%d: TIDAK LULUS\n", i);
        }
    }

    return 0;
}
