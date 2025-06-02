#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};


void inputMahasiswa(Mahasiswa* mhs) {
    system("cls");
    cout << "=== Input Data Mahasiswa ===\n" << endl;

    cin.ignore();  
    cout << "Nama    : "; getline(cin, mhs->nama);
    cout << "NIM     : "; getline(cin, mhs->nim);
    cout << "Alamat  : "; getline(cin, mhs->alamat);
    cout << "IPK     : "; cin >> mhs->ipk;

    cout << "\nData berhasil disimpan. Tekan enter untuk melanjutkan...";
    getch();
}
