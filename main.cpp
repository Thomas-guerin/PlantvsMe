/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "Plante.h"
#include "Jardinier.h"
#include "Arrosoir.h"
#include <vector>

using namespace std;

int main()
{
    
    Arrosoir * ArrosoirDeDepart = new Arrosoir(0, " C'est un arrosoir remplit , n'hésitez pas a l'utiliser sur vos plantes pour les rendres belle  1);
    ArrosoirDeDepart->affiche();
    
    Jardinier * JeanJacques = new Jardinier(20,"JeanJacques", vector<plante*>(1, ArrosoirDeDepart));
    JeanJacques->affichePartie();
    return 0;
}
