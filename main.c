#include "boolean.h"
#include "fungsitbfo.h"
#include <stdio.h>
#include <string.h>

int main(){
    /*KAMUS*/
    int energy, hygiene, fun;
    char aksi[100];

    /*ALGORITMA*/
    printf("HALO, SELAMAT DATANG Di THE SIMS\n");
    hygiene = 0;
    energy = 10;
    fun = 0;

    printf("\n");
    TulisStatus(hygiene, energy, fun);


    while (!((energy == 15 && hygiene == 15 && fun == 15)||(energy == 0 && fun == 0 && hygiene == 0))){
        printf(">> Masukkan aksi ");
        scanf("%[^\n]%*c", aksi);
        if (strcmpi(aksi, "bermain komputer") == 0){
            CekAksi (&hygiene, &energy, &fun, 0, -10, 15);
        }
        TulisStatus(hygiene, energy, fun);
        
    }

    printf("Permainan telah selesai!\n");

}