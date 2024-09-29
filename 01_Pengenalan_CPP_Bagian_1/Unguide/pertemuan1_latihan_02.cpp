// 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di- input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100


#include <iostream>
using namespace std;

string angka_ke_teks(int angka) {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
    
    if (angka < 10)
        return satuan[angka];
    else if (angka < 20)
        return belasan[angka - 10];
    else if (angka < 100)
        return puluhan[angka / 10] + (angka % 10 == 0 ? "" : " " + satuan[angka % 10]);
    else
        return "seratus";
}

int main() {
    int angka;
    
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    
    if (angka < 0 || angka > 100) {
        cout << "Angka di luar jangkauan." << endl;
    } else {
        cout << "Angka " << angka << " : " << angka_ke_teks(angka) << endl;
    }
    
    return 0;
}
