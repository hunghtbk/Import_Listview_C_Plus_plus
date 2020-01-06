#include "AnimalFeeder.h"
#include "AnimalElement.h"

AnimalFeeder::AnimalFeeder()
{
    m_model = new AnimalModel();
    this->dofetchData();
}

void AnimalFeeder::dofetchData()
{
    AnimalElement *data;
    data = new AnimalElement("Wolf", "Medium");
    m_model->addAnimal(*data);
}

AnimalFeeder::~AnimalFeeder()
{
    if (m_model != nullptr) {
        delete m_model;
        m_model = nullptr;
    }
}
