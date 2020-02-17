#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void displayArray(int* A, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }
}

void inputArray(int A[2][10]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

int* getIndexesEqualElements(int A[2][10]) {

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10;j++) {
            for (int k = i; k < 2;k++) {
                int l;
                if (k == i) {
                    l = j + 1;
                }
                else {
                    l = 0;
                }
                for (;l < 10;l++) {
                    int res[4] = {i, j, k, l};
                    if (A[i][j] == A[k][l]) {
                        return res;
                    }
                }
            }
        }
    }

}

int main()
{
    int A[2][10];

    inputArray(A);
    int* res = getIndexesEqualElements(A);
    displayArray(res,4);

    return 0;
}

