// 0222_IntoOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Mahasiswa {
    public : //akses modifer
        string nama;
        int umur;
        string jurusan;

        void output() {
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan: " << jurusan << endl;
        }

};

class Matakuliah {

};

int main()
{
    std::cout << "Hello World!\n";
}


