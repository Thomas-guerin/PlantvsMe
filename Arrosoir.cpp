#ifndef ARROSOIR_CPP
#define ARROSOIR_CPP

#include <string>
#include "Plante.h"
#include "Arrosoir.h"
#include <iostream>

// int _arrosoirCost;  std::string _name; std::string _flavorText;
// _value;

    void Arrosoir::affiche(){
        std::cout << _name << " C'est un arrosoir remplit " << _flavorText 
        << ", coûtant " << _manaCost << " et de valeur " << _value << "." << std::endl;
    }
    
    Arrosoir::Arrosoir(int cout, std::string nom, std::string description, int valeur):
    Plante(cout, nom, description), _value(valeur) {}


#endif