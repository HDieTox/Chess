#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
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
            } else if (plateau[i][k].couleur == true) {
                printf("| %c ",plateau[i][k].type);
            } else {
                printf("| %c ",plateau[i][k].type + 'a' - 'A');
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

void placement_init(struct piece** plateau)
{
    plateau[0][0].couleur = true;
    plateau[0][0].type = 'R';
    plateau[0][1].couleur = true;
    plateau[0][1].type = 'N';
    plateau[0][2].couleur = true;
    plateau[0][2].type = 'B';
    plateau[0][3].couleur = true;
    plateau[0][3].type = 'Q';
    plateau[0][4].couleur = true;
    plateau[0][4].type = 'K';
    plateau[0][5].couleur = true;
    plateau[0][5].type = 'B';
    plateau[0][6].couleur = true;
    plateau[0][6].type = 'N';
    plateau[0][7].couleur = true;
    plateau[0][7].type = 'R';
    
    plateau[7][0].couleur = false;
    plateau[7][0].type = 'R';
    plateau[7][1].couleur = false;
    plateau[7][1].type = 'N';
    plateau[7][2].couleur = false;
    plateau[7][2].type = 'B';
    plateau[7][3].couleur = false;
    plateau[7][3].type = 'Q';
    plateau[7][4].couleur = false;
    plateau[7][4].type = 'K';
    plateau[7][5].couleur = false;
    plateau[7][5].type = 'B';
    plateau[7][6].couleur = false;
    plateau[7][6].type = 'N';
    plateau[7][7].couleur = false;
    plateau[7][7].type = 'R';

    for (int  i = 0; i < TABLEAU_TAILLE; i++)
    {
        plateau[1][i].couleur = true;
        plateau[1][i].type = 'P';

        plateau[6][i].couleur = false;
        plateau[6][i].type = 'P';
    }
    
}