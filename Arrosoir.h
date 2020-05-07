#ifndef Arrosoir_H
#define Arrosoir_H

#include <string>
#include "Arrosoir.h"

class Arrosoir : public Plante{
  private:
    int _value;
  public:
    void affiche();
    Arrosoir(int cout, std::string nom, std::string description, int valeur);
};


#endif