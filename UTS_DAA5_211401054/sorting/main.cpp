#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

using namespace std;

string nama[50], nim[50], temp;
int nilai[50], total = 0, tempNilai;

void input_data(int n, int total) {
    for (int i = 0 + total; i < n + total; i++) {
        cout << "Data mahasiswa ke- " << i + 1 << endl;
        cout << "Nama   : "; cin.ignore(); getline(cin, nama[i]);
        cout << "NIM    : "; cin >> nim[i];
        cout << "Nilai  : "; cin >> nilai[i];
        cout << endl;
    }
    system("cls");
}

void show_data(int total) {
    system("cls");
    cout<<"========================================================"<<endl;
    cout<<"|                    DATA MAHASISWA                    |"<<endl;
    cout<<"|              Universitas Sumatera Utara              |"<<endl;
    cout<<"========================================================"<<endl<<endl;
    cout.flags(ios::left);
    cout<<setw(15)<<"NO  NAMA MAHASISWA                  NIM       NILAI"<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    for(int i = 0; i < total; i++){
        cout << setiosflags(ios::left) << setw(4)  << i + 1;
        cout << setiosflags(ios::left) << setw(32) << nama[i];
        cout << setiosflags(ios::left) << setw(11) << nim[i];
        cout << setiosflags(ios::left) << setw(6) << nilai[i];
        cout << endl;
    }
    cout<<"--------------------------------------------------------"<<endl;

    cout<<endl;
}

void sort_data (int total) {
    system("cls");
    for (int i = 0; i < total; i++) {
        for (int j = 0; j < total; j++) {
            if (nim[i] < nim[j]) {
                temp = nama[i];
                nama[i] = nama[j];
                nama[j] = temp;

                temp = nim[i];
                nim[i] = nim[j];
                nim[j] = temp;

                tempNilai = nilai[i];
                nilai[i] = nilai[j];
                nilai[j] = tempNilai;
            }
        }
    }
    show_data(total);
}

int main () {
    int pilihan, jumlah;
    bool kondisi = true;
    while (kondisi) {
        cout << "+===========================================+\n";
        cout << "|    PROGRAM MENGURUTKAN DATA MAHASISWA     |\n";
        cout << "|-------------------------------------------|\n";
        cout << "| 1. Input data                             |\n";
        cout << "| 2. Tampilkan Data                         |\n";
        cout << "| 3. Urutkan Data                           |\n";
        cout << "| 0. Keluar                                 |\n";
        cout << "|-------------------------------------------|\n";
        cout << " Pilih menu :  "; cin >> pilihan;
        cout << "\n+===========================================+\n";
        system("cls");

        if (pilihan == 1) {
            cout << "Jumlah data yang akan dimasukkan : "; cin >> jumlah;
            input_data(jumlah, total);
            total += jumlah;
        } else if (pilihan == 2) {
            show_data(total);
        } else if (pilihan == 3) {
            sort_data(total);
        } else if (pilihan == 0) {
            kondisi = false;
        } else {
            cout << "Pilihan yang anda masukkan salah\n\n";
        }
    }

    return 0;
}
