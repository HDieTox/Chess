#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//-----------------------------------------------------------------------------
//  DEFINE

#define TABLEAU_TAILLE 8

//-----------------------------------------------------------------------------
//  STRUCTURES

struct piece
{
    bool white;
    char type;
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

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
