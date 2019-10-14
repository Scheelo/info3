

#include <stdio.h>
#include "cdate.h"

int main()
{
    CDate Datum1, Datum2(4, 10, 2019);

    printf ("Heutiges Datum: ");
    Datum1.print();
    printf("\n");
    printf("Erster SU-Tag:");
    Datum2.print();


    return 0;

}



