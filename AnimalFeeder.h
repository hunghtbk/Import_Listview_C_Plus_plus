#ifndef ANIMALFEEDER_H
#define ANIMALFEEDER_H
#include "AnimalModel.h"

class AnimalFeeder
{
public:
    AnimalFeeder();
    void dofetchData();
    AnimalModel *m_model;
    ~AnimalFeeder();
};

#endif // ANIMALFEEDER_H
