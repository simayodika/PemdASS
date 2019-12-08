#include <stdio.h>


void main(){
    int i,j,baris1,kolom1,baris2,kolom2,k,jumlah=0;
    printf("Masukkan Baris Matrik 1:");
	scanf ("%d",&baris1);
	printf("Masukkan Kolom Matrik 1:");
	scanf ("%d",&kolom1);

    printf("Masukkan Baris Matrik 2:");
	scanf ("%d",&baris2);
	printf("Masukkan Kolom Matrik 2:");
	scanf ("%d",&kolom2);
    int  matriks1[baris1][kolom1],matriks2[baris2][kolom2],hasil[baris1][kolom2];

    if(kolom1==baris2){
        for(i=0;i<baris1;i++){
            for(j=0;j<kolom1;j++){
                printf("Masukkan Matrix 1 elemen ke[%d,%d]:",i+1,j+1);
                scanf ("%d",&matriks1[i][j]);
            }

        }

        for(i=0;i<baris2;i++){
            for(j=0;j<kolom2;j++){
                printf("Masukkan Matrix 2 elemen ke[%d,%d]:",i+1,j+1);
                scanf ("%d",&matriks2[i][j]);
            }

        }

        puts("MATRIKS 1");
        for(i=0;i<baris1;i++){
            printf("|");
                for(j=0;j<kolom1;j++){
                    printf(" %3d ",matriks1[i][j]);
                }
        printf("   |\n");
        }

        puts("MATRIKS 2");
        for(i=0;i<baris2;i++){
            printf("|");
                for(j=0;j<kolom2;j++){
                    printf(" %3d ",matriks2[i][j]);
                }
        printf("   |\n");
        }

        for(i=0;i<baris1;i++){
          for(j=0;j<kolom2;j++){
            for(k=0;k<baris2;k++){
              jumlah=jumlah+matriks1[i][k]*matriks2[k][j];
            }
            hasil[i][j]=jumlah;
            jumlah=0;
          }
        }

        printf("Hasil Perkalian Matriks:\n");
        for(i=0;i<baris1;i++){
            printf("|");
                for(j=0;j<kolom2;j++){
                    printf(" %3d ",hasil[i][j]);
                }
                printf("   |\n");
            }

    }else{
        printf("Ordo tidak sama!!");
    }



}
