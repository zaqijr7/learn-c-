#include <iostream>
using namespace std;


void introduceMySelf() {
  char nama[16] = "Muhammad Zaqi A";
  int usia = 20;
  char pekerjaan[14] = "Web Developer";
  cout << "Nama : " << nama << endl;
  cout << "Old years : " << usia << endl;
  cout << "Occupation : " << pekerjaan << endl;
  cout << "=====================================" << endl;
  
}

int luasDanKelilingPersegiPanjang () {
  int panjang, lebar;
  cout << "Masukan lebar :" << endl;
  cin >> lebar;
  if (cin.fail()) {
    cout << "Please Input Number" << endl;
    return 0;
  }
  cout << "Masukan panjang :" << endl;
  cin >> panjang;
  if (cin.fail()) {
    cout << "Please Input Number" << endl;
    return 0;
  }
  const int luas = panjang * lebar;
  const int keliling = 2 * (panjang + lebar);
  cout << "Luasnya addalah : " << luas << endl;
  cout << "Kelilingnya adalah : " << keliling << endl;
  return 0;
}



int main() {
  introduceMySelf();
  luasDanKelilingPersegiPanjang();
  return 0;
}


