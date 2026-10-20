#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    
    // Read the dimensions of Matrix A
    if (scanf("%d %d", &m, &n) != 2) {
        printf("Invalid input\n");
        return 0;
    }
    
    // Dynamically allocate memory for Matrix A
    int **matrix_a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matrix_a[i] = (int *)malloc(n * sizeof(int));
    }
    
    // Read elements of Matrix A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix_a[i][j]) != 1) {
                printf("Invalid input\n");
                return 0;
            }
        }
    }
    
    int n_b, p;
    // Read the dimensions of Matrix B
    if (scanf("%d %d", &n_b, &p) != 2) {
        printf("Invalid input\n");
        return 0;
    }
    
    // Check compatibility before reading Matrix B elements
}
