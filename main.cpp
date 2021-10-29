#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
    cout << "Input a!" << endl;
    cin >> a;
    cout << "Input b!" << endl;
    cin >> b;
    cout << "a + b = " << a + b << endl;
    if (a + b > 100) {
      cout << "Nilai adalah ratusan" << endl;
    } else if (a + b >= 10 && a + b <= 99) {
      cout << "Nilai adalah puluhan" << endl;
    } else if (a + b >= 0 && a + b <= 9) {
      cout << "Nilai adalah satuan" << endl ;
    }
    return 0;
}
