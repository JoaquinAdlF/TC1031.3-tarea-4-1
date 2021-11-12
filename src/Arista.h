// H. Daniel Martinez A01177464
// Joaquín Aguirre A01177479
// Janet Espronceda A01197814

#include <iostream>
#include "Vertice.h"
using namespace std;

class Arista{ 
  private:
    Vertice vi;
    Vertice vj;

  public:
    Arista();
    Arista(Vertice _vi, Vertice _vj);
    //metodos getters
    Vertice getvi();
    Vertice getvj();
    //metodos setters
    void setvi(Vertice _vi);
    void setvj(Vertice _vj);
    void imprimirArista();
};

Arista::Arista(){
  Vertice tmp(0,0);
  vi = tmp;
  vj = tmp;
}

Arista::Arista(Vertice _vi, Vertice _vj){
  vi = _vi;
  vj = _vj;
}

Vertice Arista::getvi(){
  return vi;
}

Vertice Arista::getvj(){
  return vj;
}

void Arista::setvi(Vertice _vi){
  vi = _vi;
}

void Arista::setvj(Vertice _vj){
  vj = _vj;
}

void Arista::imprimirArista(){
  cout << "(" << vi.getdato() << ", " << vj.getdato() << ")";
}