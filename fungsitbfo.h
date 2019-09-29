/* File: fungsitbfo.h */

#ifndef __FUNGSITBFO_H__
#define __FUNGSITBFO_H__

#include "boolean.h"
#include <stdio.h>

void TulisStatus(int hygiene, int energy, int fun);
    /*Mencetak Status pemain ke layar>/
    /* I.S. hygiene, energy, fun terdefinisi */
    /* F.S. hygiene, enegry, fun tercetak ke layar*/

void CekAksi (int *ihygiene, int *ienergy, int *ifun, int addhygyene, int addenergy, int addfun);
    /*Memeriksa apakah akasi yang dilakukan valid atau tidak*/
    /* I.S ihygiene, ienergy, ifun, addhygyene, addenergy, addfun terdefinisi */
    /* F.S jika aksi valid, nilai ihygiene, ienergy, dan ifun akan bertambah atau berkuran sesuai.
    Jika aksi tidak valid, akan dicetak tulisan "aksi tidak valid ke layar"*/



#endif