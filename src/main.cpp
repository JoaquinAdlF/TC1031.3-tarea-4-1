// H. Daniel Martinez A01177464
// Joaquín Aguirre A01177479
// Janet Espronceda A01197814

// Actividad 4.1 — Simulación de lista con grafos

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Vertice.h"
#include "Arista.h"
using namespace std;

int main() {
  string n_in, data;
  int counter = 0;
  int nData = 0;

  cout << "Ingrese una lista de numeros separados por comas (1,2,3): ";
  cin >> n_in;
  stringstream string_stream(n_in), string_stream2(n_in);

  while(getline(string_stream, data, ',')){
    nData++;
  }

  Vertice vertices[nData];
  int dataArr[nData], dataInt;
  
  while(getline(string_stream2, data, ',')){
    dataInt = stoi(data);
    dataArr[counter] =  dataInt;
    counter++;
  }

  for(int i = 0; i<nData; i++){
    int dato = dataArr[i];
    vertices[i].setdato(dato);
    vertices[i].setid(i);
  }
  
  Arista aristas[nData - 1];

  for(int i = 0; i<nData-1; i++){
    aristas[i].setvi(vertices[i]);
    aristas[i].setvj(vertices[i+1]);
  }
} 