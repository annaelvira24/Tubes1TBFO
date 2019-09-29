/* File : fungsitbfo.c*/

#include "boolean.h"
#include "fungsitbfo.h"
#include <stdio.h>

void TulisStatus(int hygiene, int energy, int fun)
    /*Mencetak Status pemain ke layar>/
    /* I.S. hygiene, energy, fun terdefinisi */
    /* F.S. hygiene, enegry, fun tercetak ke layar*/
    {
        printf("Status Anda saat ini : \n");
        printf("Hygiene = %d \n", hygiene);
        printf("Energy = %d \n", energy);
        printf("Fun = %d \n", fun);
        printf("\n");
    }

void CekAksi (int *ihygiene, int *ienergy, int *ifun, int addhygyene, int addenergy, int addfun)
    /*Memeriksa apakah akasi yang dilakukan valid atau tidak*/
    /* I.S ihygiene, ienergy, ifun, addhygyene, addenergy, addfun terdefinisi */
    /* F.S jika aksi valid, nilai ihygiene, ienergy, dan ifun akan bertambah atau berkuran sesuai.
    Jika aksi tidak valid, akan dicetak tulisan "aksi tidak valid ke layar"*/
    {
        if (*ihygiene + addhygyene <= 15 && *ihygiene + addhygyene >=0 && *ienergy + addenergy <=15 
        && *ienergy + addenergy >=0 && *ifun + addfun <=15 && *ifun + addfun >=0){
            *ihygiene += addhygyene;
            *ienergy += addenergy;
            *ifun += addfun;
            printf("===== Aksi berhasil! =====\n");
        }

        else {
            printf("===== Aksi tidak valid =====\n");
        }
    }

