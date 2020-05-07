#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <string>
#include "Plante.h"
#include <iostream>

// int _arrosoirCost;  std::string _name; std::string _flavorText;

    void Plante::affiche(){
        std::cout << "Ceci est une plante a l'état de graine !!!" << std::endl;
    }
    
    Plante::Plante(int cout, std::string nom, std::string description):
        _arrosoirCost(cout), _name(nom), _flavorText(description) {}
    
    int Plante::getCost(){
        return _arrosoirCost;
    }
    
#endif