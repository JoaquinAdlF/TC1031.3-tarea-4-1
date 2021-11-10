// H. Daniel Martinez A01177464
// Joaquín Aguirre A01177479
// Janet Espronceda A01197814

#include <iostream>
using namespace std;

class Vertice{ 
  private:
    int id;
    int dato;

  public:
    Vertice();
    Vertice(int _id, int _dato);
    //metodos getters
    int getid();
    int getdato();
    //metodos setters
    void setid(int _id);
    void setdato(int _dato);
};

Vertice::Vertice(){
  id = 0;
  dato = 0;
}

Vertice::Vertice(int _id, int _dato){
  id = _id;
  dato = _dato;
}

int Vertice::getid(){
  return id;
}

int Vertice::getdato(){
  return dato;
}

void Vertice::setid(int _id){
  id = _id;
}

void Vertice::setdato(int _dato){
  dato = _dato;
}