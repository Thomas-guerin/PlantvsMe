#ifndef Jardinier_H
#define Jardinier_H

#include <string>
#include <vector>
#include "Plante.h"

class Jardinier{
  protected:
    int _jaugedematurité;
    std::string _name;
    int _arrosoirTotal;
    int _arrosoir;
    std::vector<Plante*> _hand;
    std::vector<Plante*> _board;
    std::vector<Plante*> _bin;
  public:
    void affichePartie();
    Jardinier(int pv, std::string nom, std::vector<Plante*> ArrosoirenMain);
    void Arroser(int indexDansLaMain);
    void regainArrosoir();
};


#endif