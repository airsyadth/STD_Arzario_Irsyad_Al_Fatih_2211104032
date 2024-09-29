// 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

#include <iostream>
using namespace std;

int main() {
    float a, b;
    
    cout << "Masukkan bilangan pertama: " << endl;
    cin >> a;
    
    cout << "Masukkan bilangan kedua: " << endl;
    cin >> b;
    
    cout << "Hasil penjumlahan: " << a + b << endl;
    cout << "Hasil pengurangan: " << a - b << endl;
    cout << "Hasil perkalian: " << a * b << endl;
    
    if (b != 0)
        cout << "Hasil pembagian: " << a / b << endl;
    else
        cout << "Pembagian dengan nol tidak diperbolehkan." << endl;
    
    return 0;
}
