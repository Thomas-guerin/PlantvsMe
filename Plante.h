#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
  protected:
    int _ArrosoirCost;
    std::string _name;
    std::string _flavorText;
  public:
    void virtual affiche();
    Plante(int cout, std::string nom, std::string description);
    int getCost();
};


#endif