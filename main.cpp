#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int umur;
    float ipk;

Public:
    Mahasiswa(string n, int u, float i) : nama(n), umur(u), ipk(i) {}

    Void displayInfo() const {
        Cout << “Nama: “ << nama << “, Umur: “ << umur << “, IPK: “ << ipk << endl;
    }
    Bool isLulus() const {
        Return umur >= 18 && ipk >= 3.0;
    }
    void greet() const {
        cout << "Halo!" << endl;
    }
};

int main() {
    Mahasiswa mahasiswa("Robertus", 19, 3.8);

    mahasiswa.displayInfo();
    mahasiswa.greet();





