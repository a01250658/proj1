#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  string aEntrada, aSalida;
  char cEq;
  int res;
  string  sNum1="";
  string  sNum2="";
  char cEntrada;
cout << "Dame el nombre del archivo de entrada t el de salida:"<< endl;
cin >> aEntrada;
cin >> aSalida; 
ifstream Entrada;
ofstream Salida;
Entrada.open(aEntrada);
Salida.open(aSalida);
while(Entrada >> aEntrada){
  int iX=0;
  while(iX < 1){
  switch (cEntrada) {
    case 'B':
    sNum1 +="0";
    break;
    case 'y':
    sNum1 +="1";
    break;
    case '/':
    sNum1 +="2";
    break;
    case '8':
    sNum1 +="3";
    break;
    case 'T':
    sNum1 +="4";
    break;
    case '&':
    sNum1 +="5";
    break;
    case 'Q':
    sNum1 +="6";
    break;
    case 'E':
    sNum1 +="7";
    break;
    case 'P':
    sNum1 +="8";
    break;
    case 'F':
    sNum1 +="9";
    break;
    case ' ':
    iX++;
    break;
  }
  while(iX < 2){
  switch (cEntrada) {
    case 'C':
    cEq = '+';
    break;
    case 'c':
    cEq = '-';
    break;
    case '#':
    cEq = '*';
    break;
    case '@':
    cEq = '/';
    break;
    case ' ':
    iX++;
    break;
  }
}
while(iX < 3){
  switch (cEntrada) {
    case 'B':
    sNum2 +="0";
    break;
    case 'y':
    sNum2 +="1";
    break;
    case '/':
    sNum2 +="2";
    break;
    case '8':
    sNum2 +="3";
    break;
    case 'T':
    sNum2 +="4";
    break;
    case '&':
    sNum2 +="5";
    break;
    case 'Q':
    sNum2 +="6";
    break;
    case 'E':
    sNum2 +="7";
    break;
    case 'P':
    sNum2 +="8";
    break;
    case 'F':
    sNum2 +="9";
    break;
    case ' ':
    iX++;
    break;
  }
  int iNum1 = stoi(sNum1);
  int iNum2 = stoi(sNum2);
  switch (cEq) {
    case 'C':
    res = iNum1 + iNum2;
    break;
    case 'c':
    res = iNum1 - iNum2;
    break;
    case '#':
    res = iNum1 * iNum2;
    break;
    case '@':
    res = iNum1 / iNum2;
    break;
  }
  Salida >> sNum1 >> cEq >> sNum2 >> "=" >> res;
}
  }
  if(aEntrada=="/n"){
    iX=0;
  }
}
return 0;  
}
