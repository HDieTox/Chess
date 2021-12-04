#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib.h"

//-----------------------------------------------------------------------------
//  DEFINE

#define TABLEAU_TAILLE 8

//-----------------------------------------------------------------------------
//  STRUCTURES

struct piece
{
    char couleur;       //  b:noir / w:blanc / n:neutre
    char type;          //  B:fou / R:tour / N:cavalier / K:roi / Q:reine / V:vide
};

struct co_case
{
    int ligne;
    char colonne;
};

struct coup
{
    struct piece piece;
    struct co_case depart;
    struct co_case arrive;
};

//-----------------------------------------------------------------------------
// MAIN

int main(void)
{
    struct piece **plateau = alloc_plateau();
    print_plateau(plateau);
    free_plateau(plateau);

    return 0;
}
