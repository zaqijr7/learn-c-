#include <iostream>
using namespace std;


int main() {
  float panjangBenda, inchi, kaki, yard;
  cout << "Masukan Panjang Benda (Meter) : " << endl;
  cin >> panjangBenda;
  inchi = (panjangBenda * 1000) / 25.4;
  kaki = (panjangBenda * 100) / 30.48;
  yard = panjangBenda / 0.9144;
//   1 inchi = 25.4 mm, 1 kaki = 30.48 cm, dan 1 yard = 0.9144 m
  cout << "Panjang dalam Inchi : " << inchi << " inchi" << endl;
  cout << "Panjang dalam Kaki : " << kaki << " kaki" << endl;
  cout << "Panjang dalam Yard : " << yard << " yard" << endl;
  return 0;
}


