#include "vecteurs.h"

void produit_vectoriel(int a[3], int b[3], int result[3]) {
    result[0] = a[1] * b[2] - a[2] * b[1];
    result[1] = a[2] * b[0] - a[0] * b[2];
    result[2] = a[0] * b[1] - a[1] * b[0];
}

void produit_vecteur_matrice(int vect[], int n, int m, int matrice[n][m], int result[m]) {
    for (int j = 0; j < m; j++) {
        result[j] = 0;
        for (int i = 0; i < n; i++) {
            result[j] += vect[i] * matrice[i][j];
        }
    }
}
