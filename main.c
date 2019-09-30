#include "boolean.h"
#include "fungsitbfo.h"
#include <stdio.h>
#include <string.h>

#define Nmax 15
#define Nmin 0


int main(){
    /*KAMUS*/
    char anykey;
    int energy, hygiene, fun;
    char aksi[100];

    /*ALGORITMA*/
	printf("\n");

    printf("ooooooooooooo ooooo   ooooo oooooooooooo     .oooooo..o ooooo ooo        ooooo  .oooooo..o \n");
    printf("8'   888   `8 `888'   `888' `888'     `8    d8P'    `Y8 `888' `88.       .888' d8P'    `Y8 \n");
    printf("     888       888     888   888            Y88bo.       888   888b     d'888  Y88bo.\n");
    printf("     888       888ooooo888   888oooo8        `'Y8888o.   888   8 Y88. .P  888   `Y8888o.\n");  
    printf("     888       888     888   888                 ` Y88b  888   8  `888'   888       `Y88b\n");
    printf("     888       888     888   888       o    oo     .d8P  888   8    Y     888  oo     .d8P   \n");
    printf("    o888o     o888o   o888o o888ooooood8    88888888P'  o888o o8o        o888o 88888888P'  \n");
    printf("\n");

    printf("press ENTER to continue ...\n");
    scanf("%c", &anykey);
    
    hygiene = 0;
    energy = 10;
    fun = 0;

    printf("\n");
	PilihanAksi();

    printf("====*** SELAMAT BERMAIN ! ***====\n");
    printf("\n");
    TulisStatus(hygiene, energy, fun);


    while (!((energy == Nmax && hygiene == Nmax && fun == Nmax)||(energy == Nmin && fun == Nmin && hygiene == Nmin))){
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
		
		else if (strcmpi(aksi, "help") == 0){
			PilihanAksi();
		}
		
		else {
			PilihanAksi();
			printf("Aksi tidak terdefinisi! Silakan masukkan aksi yang terdefinisi diatas\n");
		}
        TulisStatus(hygiene, energy, fun);
    }

    printf("========Permainan telah selesai!=========\n");
    if (energy == Nmax && hygiene == Nmax && fun == Nmax){
        printf("____________________________________ \n");
        printf("|                                   | \n");
        printf("|       **** YOU WIN !!! ****       | \n");
        printf("|___________________________________| \n");
    }

    else {
        printf("____________________________________ \n");
        printf("|                                   | \n");
        printf("|          YOU LOSE :((             | \n");
        printf("|___________________________________| \n");
    }

}