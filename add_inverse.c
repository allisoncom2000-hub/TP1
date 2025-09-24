#include<stdio.h>
#include"add_inverse.h"

void tableau_inverse() {
    int T[9]={4,6,1,0,7,5,6,45,53};
    int i;

    //inverser un tableau 
    printf("\n=== Tableau T ===\n");
    for(i=0; i<9; i++) {
        printf("%d  ",T[i]);
    }
    printf("\n");

    int A,k=9;
    for(i=0; i<4; i++) {
        do {
            k--;
            A=T[i];
            T[i]=T[k];
            T[k]=A;
        }
        while(k==4);
    }

    printf("\n=== Tableau T inverse ===\n");
    for(i=0; i<9; i++) {
        printf("%d  ",T[i]);
    }
    printf("\n\n");
}


void somme_matrice() {
    int M[2][2]={{2,4},{5,0}},L[2][2]={{4,4},{0,8}},M_plus_L[2][2];
    int j,p,d,h;
    
    printf("\n=== Matrices M et L ===\n");
    for(j=0; j<2; j++) {
        printf("%d %d   ",M[j][0],L[j][0]);
        printf("%d %d\n",M[j][1],L[j][1]);
    }
    
    //addition des deux matrices 
    for(j=0; j<2; j++) {
        for(p=0; p<2; p++) {
            M_plus_L[j][p]=M[j][p]+L[j][p];
        }
    }
    
    //la somme des deux matrices
    printf("\n=== M + L ===\n");
    for(p=0; p<2; p++) {
        printf("%d  ",M_plus_L[p][0]);
        printf(" %d\n",M_plus_L[p][1]);
    }
}