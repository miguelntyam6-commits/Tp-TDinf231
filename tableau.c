#include <stdio.h>
#include "tableau.h"

int recherche_sequentielle(int T[], int n, int x) {
    for(int i=0;i<n;i++)
        if(T[i]==x) return i;
    return -1;
}

int est_trie(int T[], int n) {
    for(int i=0;i<n-1;i++)
        if(T[i] > T[i+1]) return 0;
    return 1;
}

int mediane(int T[], int n) {
    // tri par insertion
    for(int i=1;i<n;i++) {
        int key = T[i];
        int j = i-1;
        while(j>=0 && T[j] > key) {
            T[j+1] = T[j];
            j--;
        }
        T[j+1] = key;
    }
    if(n%2==1) return T[n/2];
    else return (T[n/2-1]+T[n/2])/2;
}

void inverser_tableau(int T[], int n) {
    for(int i=0;i<n/2;i++) {
        int tmp = T[i];
        T[i] = T[n-1-i];
        T[n-1-i] = tmp;
    }
}

void afficher_tableau(int T[], int n) {
    for(int i=0;i<n;i++) printf("%d ", T[i]);
    printf("\n");
}
