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
void tampilMahasiswa(const Mahasiswa* mhs) {
    system("cls");
    cout << "=== Data Mahasiswa ===\n" << endl;
    cout << "Nama    : " << mhs->nama << endl;
    cout << "NIM     : " << mhs->nim << endl;
    cout << "Alamat  : " << mhs->alamat << endl;
    cout << "IPK     : " << mhs->ipk << endl;

    cout << "\nTekan enter untuk melanjutkan...";
    getch();
}

int main() {
    Mahasiswa mhs;

    inputMahasiswa(&mhs);

    tampilMahasiswa(&mhs);

    return 0;
}

