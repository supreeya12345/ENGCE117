#include <stdio.h>
#include <stdlib.h>

int* GetMatrix(int *row, int *col) ;

int main() {
    int m, n;
    int *data = GetMatrix(&m, &n);

    if (data == NULL) {
        printf("Matrix is empty (0x0).\n");
        return 0;
    }

    printf("Matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    free(data);
    return 0;
}

int* GetMatrix(int *row, int *col) {
    printf("Enter number of rows and columns: ");
    scanf("%d %d", row, col);

    // ตรวจสอบว่า row และ col ต้องไม่เป็นลบ
    if (*row <= 0 || *col <= 0) {
        if (*row == 0 && *col == 0) {
            return NULL;
        }
        printf("Error: Invalid matrix dimensions\n");
        exit(1);
    }

    // จองหน่วยความจำสำหรับเมทริกซ์
    int *matrix = (int *)malloc((*row) * (*col) * sizeof(int));
    if (matrix == NULL) {
        printf("Error: Memory allocation failed\n");
        exit(1);
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            if (scanf("%d", &matrix[i * (*col) + j]) != 1) {
                printf("Error: Invalid matrix input\n");
                free(matrix);
                exit(1);
            }
        }
    }

    return matrix;
}
