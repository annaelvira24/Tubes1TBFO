#include "boolean.h"
#include "fungsitbfo.h"
#include <stdio.h>

int main(){
    /*KAMUS*/
    STATUS CurrentStatus, InputStat;
    char aksi[50];

    /*ALGORITMA*/
    printf("HALO, SELAMAT DATANG\n");
    hygiene = 0;
    energy = 10;
    fun = 0;

    printf("Status Anda saat ini : \n");
    printf("Hygiene = %d \n", &hygiene);
    printf("Energy = %d \n", &energy);
    printf("Fun = %d \n", &fun);

    while ((energy != 15 && hygiene != 15 && fun != 15)||(energy!= 0 && fun != 0 && hygiene != 0)){
        printf(">> Masukkan aksi ")
        scanf("%s", &aksi);
    }

}