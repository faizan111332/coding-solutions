#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find minimum distance to any of the 4 borders
            int min_dist = min(min(i, j), min(size - 1 - i, size - 1 - j));
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }

    return 0;
}
