#include <stdio.h>
#include "matrices.h"
#include "tableau.h"
#include "operations.h"

int main() {
    printf("==== TP STRUCTURES DE DONNEES II ===\n");

    // Exemple matrice
    int A[2][2] = {{1,2},{3,4}};
    int B[2][2] = {{5,6},{7,8}};
    int C[2][2];

    somme_matrices(2,2,A,B,C);
    printf("Somme des matrices:\n");
    afficher_matrice(2,2,C);

    produit_matrices(2,2,2,A,B,C);
    printf("Produit des matrices:\n");
    afficher_matrice(2,2,C);

    // Exemple tableau
    int T[5] = {3, 5, 2, 7, 1};
    printf("Tableau initial: ");
    afficher_tableau(T,5);

    int pos = recherche_sequentielle(T,5,7);
    printf("Position de 7: %d\n", pos);

    printf("Tableau est trie? %d\n", est_trie(T,5));

    printf("Mediane: %d\n", mediane(T,5));

    inverser_tableau(T,5);
    printf("Tableau inverse: ");
    afficher_tableau(T,5);

    // Produit vectoriel (3D)
    int U[3] = {1,2,3}, V[3] = {4,5,6}, W[3];
    produit_vectoriel(U,V,W);
    printf("Produit vectoriel: (%d,%d,%d)\n", W[0],W[1],W[2]);

    // Produit vecteur x matrice
    int M[2][2] = {{1,2},{3,4}};
    int vec[2] = {2,3}, res[2];
    produit_vecteur_matrice(vec,M,res,2,2);
    printf("Vecteur x Matrice: (%d,%d)\n", res[0], res[1]);

    // Multiplication avec +1 uniquement
    printf("3 x 4 = %d (via +1)\n", mult_plus1(3,4));

    return 0;
}
