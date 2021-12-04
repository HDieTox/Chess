#include <stdlib.h>
#include <stdio.h>
#include "lib.h"


#define TABLEAU_TAILLE 8

//-----------------------------------------------------------------------------
//  STRUCTURES

struct piece
{
    char couleur;       //  b:noir / w:blanc / n:neutre
    char type;          //  B:fou / R:tour / N:cavalier / K:roi / Q:reine / V:vide
};

//-----------------------------------------------------------------------------
// FONCTIONS

struct piece **alloc_plateau()
{
    struct piece **matrice = malloc(8 * sizeof(struct piece *));
    if (matrice == NULL) {return NULL;}

    for (int i = 0; i < 8; i++)
    {
        matrice[i] = malloc(8 * sizeof(struct piece));
        if (matrice[i] == NULL) {return NULL;}
    }


//REMPLISSAGE PAR VIDE
    for (int i = 0; i < 8; i++)
    {
        
        for (int k = 0; k < 8; k++)
        {
            matrice[i][k].type = 'V';
        }
    }
    return matrice;
}

void print_plateau(struct piece** plateau)
{
    printf("---------------------------------\n");
    for(int i = 0; i < TABLEAU_TAILLE; i++)
    {
        for(int k = 0; k < TABLEAU_TAILLE; k++)
        {
            if (plateau[i][k].type == 'V')
            {
                printf("|   ");
            } else {
                printf("| %c ",plateau[i][k].type);
            }            
        }
        printf("|\n---------------------------------\n");
    }
    printf("\n");
}

void free_plateau(struct piece** plateau)
{
    for (int i = 0; i < TABLEAU_TAILLE; i++)
    {
        free(plateau[i]);
    }
    free(plateau);
}