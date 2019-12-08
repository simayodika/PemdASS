#include <stdio.h>


void main(){
    int i,j,baris,kolom,k;
    printf("Masukkan Baris Matrik :");
	scanf ("%d",&baris);
	printf("Masukkan Kolom Matrik :");
	scanf ("%d",&kolom);
    int array2Dimensi[baris][kolom],array1Dimensi[baris*kolom];

    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            printf("Masukkan elemen ke[%d,%d]:",i+1,j+1);
            scanf ("%d",&array2Dimensi[i][j]);
        }

    }
    printf("Array 2 dimensi:\n");
    for(i=0;i<baris;i++){
        printf("|");
        for(j=0;j<kolom;j++){
            printf(" %d ",array2Dimensi[i][j]);
        }
    puts("|");
    }

    printf("array 1 dimensi:\n");
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            for(k=0;k<1;k++){
                array1Dimensi[k]=array2Dimensi[i][j];
                printf(" %d ",array1Dimensi[k]);
            }
        }
    }




}

