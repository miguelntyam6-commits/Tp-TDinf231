#include <stdio.h>
#include "matrices.h"

void somme_matrices(int n, int m, int A[n][m], int B[n][m], int C[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            C[i][j] = A[i][j] + B[i][j];
}

void produit_matrices(int n, int p, int m, int A[n][p], int B[p][m], int C[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) {
            C[i][j] = 0;
            for(int k=0;k<p;k++)
                C[i][j] += A[i][k]*B[k][j];
        }
}

void afficher_matrice(int n, int m, int M[n][m]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}
