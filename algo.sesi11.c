#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, len;

    printf("Masukkan kata: ");
    scanf("%s", str);

    len = strlen(str);

    printf("Hasil rotasi: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
