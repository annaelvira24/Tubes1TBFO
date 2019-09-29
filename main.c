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
		
		else if (strcmpi(aksi, "tidur siang") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, 10, 0);
        }
		
		else if (strcmpi(aksi, "tidur malam") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, 15, 10);
        }
		
		else if (strcmpi(aksi, "makan hamburger") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, 5, 0);
        }
		
		else if (strcmpi(aksi, "makan pizza") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, 10, 0);
        }
		
		else if (strcmpi(aksi, "makan steak and beans") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, 15, 0);
        }
		
		else if (strcmpi(aksi, "minum air") == 0){
            CekAksi(&hygiene, &energy, &fun, -5, 0, 0);
        }
		
		else if (strcmpi(aksi, "minum kopi") == 0){
            CekAksi(&hygiene, &energy, &fun, -10, 5, 0);
        }
		
		else if (strcmpi(aksi, "minum jus") == 0){
            CekAksi(&hygiene, &energy, &fun, -5, 10, 0);
        }
		
		else if (strcmpi(aksi, "buang air kecil") == 0){
            CekAksi(&hygiene, &energy, &fun, 5, 0, 0);
        }
		
		else if (strcmpi(aksi, "buang air besar") == 0){
            CekAksi(&hygiene, &energy, &fun, 10, -5, 0);
        }
		
		else if (strcmpi(aksi, "bersosialisasi ke kafe") == 0){
            CekAksi(&hygiene, &energy, &fun, -5, -10, 15);
        }
		
		else if (strcmpi(aksi, "bermain media sosial") == 0){
            CekAksi(&hygiene, &energy, &fun, 0, -10, 10);
        }
		
        TulisStatus(hygiene, energy, fun);
    }

    printf("Permainan telah selesai!\n");

}