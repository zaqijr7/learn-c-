#include <iostream>
using namespace std;


int main() {
  unsigned short int currentHeight, idealWeight;
  cout << "Masukan tinggi badan anda saat ini : " << endl;
  cin >> currentHeight;
  idealWeight = (currentHeight - 100) - ((currentHeight - 100) * 10 / 100);
  cout << "Berat badan ideal anda adalah : " << idealWeight << "Kg" << endl;
  return 0;
}


