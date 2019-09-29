#include "boolean.h"
#include "fungsitbfo.h"
#include <stdio.h>
#include <string.h>

int main(){
    /*KAMUS*/
    int energy, hygiene, fun;
    char aksi[100];

    /*ALGORITMA*/
    printf("====== HALO, SELAMAT DATANG Di THE SIMS ======\n");
    hygiene = 0;
    energy = 10;
    fun = 0;

    printf("\n");
    TulisStatus(hygiene, energy, fun);


    while (!((energy == 15 && hygiene == 15 && fun == 15)||(energy == 0 && fun == 0 && hygiene == 0))){
        printf(">> Masukkan aksi : ");
        scanf("%[^\n]%*c", aksi);
        if (strcmpi(aksi, "bermain komputer") == 0){
            CekAksi (&hygiene, &energy, &fun, 0, -10, 15);
        }

        else if (strcmpi(aksi, "mandi") == 0){
            CekAksi(&hygiene, &energy, &fun, 15, -5, 0);
        }

        else if (strcmpi(aksi, "cuci tangan") == 0){
            CekAksi(&hygiene, &energy, &fun, 5, 0, 0);
        }

         else if (strcmpi(aksi, "mendengarkan musik di radio") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, -5, 10);
        }

        else if (strcmpi(aksi, "Membaca koran") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, -5, 5);
        }

        else if (strcmpi(aksi, "membaca novel") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, -5, 10);
        }

        TulisStatus(hygiene, energy, fun);
    }

    printf("Permainan telah selesai!\n");

}