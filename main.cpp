#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    const int n = 2;
    const int m = 10;
    int A[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m;j++) {
            printf("%d ", A[i][j]);
        }
        printf("%s", "\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m;j++) {
            for (int k = i; k < n;k++) {
                int l;
                if (k == i) {
                    l = j+1;
                }
                else {
                    l = 0;
                }
                for (;l < m;l++) {
                    if (!(i==k && l==j) && A[i][j] == A[k][l]) {
                        printf("A[%d][%d] = A[%d][%d]", i, j, k, l);
                        printf("%s", "\n");
                    }
                }
            }
        }
    }

    return 0;
}