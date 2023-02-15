#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
using namespace std;

class School{
    public:
        void setName(string Name);
        string getName();
        School();
        School(string Name,string Souvenir,double souvenirPrice);
        void setSouvenir(string Souvenir);
        string getSouvenir();
        void setSouvenirPrice(double souvenirPrice);
        double getSouvenirPrice();
    private:
        string Name;
        string Souvenir;
        double souvenirPrice;
};

//Constructors
School::School(){};
School::School(string Name,string Souvenir,double souvenirPrice)
{
    this->Name=Name;
    this->Souvenir=Souvenir;
    this->souvenirPrice=souvenirPrice; 
}

//Name member functions
void School::setName(string Name)
{
    this->Name=Name;
}
string School::getName()
{
    return Name;
}

//Souvenir member functions
void School::setSouvenir(string Souvenir)
{
    this->Souvenir=Souvenir;
}
string School::getSouvenir()
{
    return Souvenir;
}
void School::setSouvenirPrice(double souvenirPrice)
{
    this->souvenirPrice=souvenirPrice;
}
double School::getSouvenirPrice()
{
    return souvenirPrice;
}


#endif
