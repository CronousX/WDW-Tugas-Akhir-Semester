#include <stdio.h>

int main() {
    int i = 0, arr[101];
    while (scanf("%d", &arr[i]) != EOF) {
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d\n", numbers[j]);
    }
    return 0;
}