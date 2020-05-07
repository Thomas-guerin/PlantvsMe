#ifndef Jardinier_CPP
#define Jardinier_CPP

#include <string>
#include <vector>
#include <iostream>
#include "Jardinier.h"

//int _etatdelaPlante;std::string _name;int _nombredarosoir;int _arrosoir;
// vector<Plante> _hand;vector<Plante> _board;vector<Plante> _bin;

    void Jardinier::affichePartie(){
        std::cout << _name << " possède " << _etatdelaPlante << " arrosoirs " << _arrosoirTotal<<
        "/" << _nombredarosoir << " arrosoirs.";
        _hand[0]->affiche();
    }
    
    Jardinier::Jardinier(int pv, std::string nom, std::vector<Plante*> ArrosoirenMain):
    _etatdelaPlante(Xp), _name(nom), _arrosoirTotal(0), _arrosoir(0), _hand(ArrosoirenMain) {}
    
    void Jardinier::arroser(int arrosoirDansLaMain){
        _board.push_back(_hand[arrosoirDansLaMain]);      
    }
    
    void Jardinier::regainarrosoir(){
        _arrosoir=_arrosoirTotal;
    }


#endif