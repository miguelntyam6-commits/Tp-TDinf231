#include "operations.h"

int mult_plus1(int a, int b) {
    int result = 0;
    for(int i=0;i<b;i++) {
        for(int j=0;j<a;j++) {
            result += 1;
        }
    }
    return result;
}

void produit_vectoriel(int U[3], int V[3], int W[3]) {
    W[0] = U[1]*V[2] - U[2]*V[1];
    W[1] = U[2]*V[0] - U[0]*V[2];
    W[2] = U[0]*V[1] - U[1]*V[0];
}

void produit_vecteur_matrice(int V[], int M[][2], int R[], int n, int m) {
    for(int j=0;j<m;j++) {
        R[j] = 0;
        for(int i=0;i<n;i++) {
            R[j] += V[i]*M[i][j];
        }
    }
}
