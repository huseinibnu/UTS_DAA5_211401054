#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct pertamina{
    string nama_barang;
    int kode_barang;
    int harga;
    int total_per_item;
    int total;
}transaksi[5];

int main() {
    int jumlah, total_belanja;
    cout << "========================================" << endl;
    cout << "|       DATA HARGA BBM PERTAMINA       |" << endl;
    cout << "|           Jalan Kanan Kiri           |" << endl;
    cout << "========================================" << endl << endl;
    cout << "| 1. Pertamax Turbo   | Rp. 14.600     |" << endl;
    cout << "| 2. Pertamax         | Rp. 14.200     |" << endl;
    cout << "| 3. Pertalite        | Rp. 10.000     |" << endl;
    cout << "| 4. Bio Solar        | Rp. 6.800      |" << endl;
    cout << "| 5. Pertamina Dex    | Rp. 18.900     |" << endl;
    cout << "========================================" << endl << endl;
    cout <<"  --TRANSAKSI PENJUALAN BARANG--"<<endl<<endl;
    cout << "Masukkan jumlah item yang ingin anda beli : ";
    cin  >> jumlah;

    for(int i = 1; i <= jumlah; i++){
        cout<<"  Masukkan Data Transaksi Barang "<<endl;
        cout<<"+--------------------------------+"<<endl;
        cout<<"| Kode Barang   : "; cin>> transaksi[i].kode_barang;cout<<endl;
        if (transaksi[i].kode_barang == 1) {
            transaksi[i].nama_barang = "Pertamax Turbo";
            transaksi[i].harga = 14600;
        } else if (transaksi[i].kode_barang == 2) {
            transaksi[i].nama_barang = "Pertamax";
            transaksi[i].harga = 14200;
        } else if (transaksi[i].kode_barang == 3) {
            transaksi[i].nama_barang = "Pertalite";
            transaksi[i].harga = 10000;
        } else if (transaksi[i].kode_barang == 4) {
            transaksi[i].nama_barang = "Bio Solar";
            transaksi[i].harga = 6800;
        } else if (transaksi[i].kode_barang == 5) {
            transaksi[i].nama_barang = "Pertamina Dex";
            transaksi[i].harga = 18900;
        } else {
            cout << "Kode yang anda masukkan salah \n";
        }
        cout << "| Jumlah Liter  : "; cin >> transaksi[i].total_per_item; cout << endl;
        transaksi[i].total = transaksi[i].harga * transaksi[i].total_per_item;
        total_belanja += transaksi[i].total;
        cout<<"+--------------------------------+"<<endl<<endl;
    }

    system("cls");
    cout<<"============================================================================"<<endl;
    cout<<"|                       DATA PEMBELIAN BBM PERTAMINA                       |"<<endl;
    cout<<"|                             Jalan Kanan Kiri                             |"<<endl;
    cout<<"============================================================================"<<endl<<endl;
    cout.flags(ios::left);
    cout<<setw(15)<<"NO  NAMA BARANG            HARGA       JUMLAH LITER       TOTAL   "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;

    for(int i = 1; i <= jumlah; i++){
        cout << setiosflags(ios::left) << setw(5)  << i;
        cout << setiosflags(ios::left) << setw(22) << transaksi[i].nama_barang;
        cout << setiosflags(ios::left) << setw(17) << transaksi[i].harga;
        cout << setiosflags(ios::left) << setw(14) << transaksi[i].total_per_item;
        cout << setiosflags(ios::left) << setw(10) << transaksi[i].total;
        cout << endl;
    }
    cout<<"----------------------------------------------------------------------------"<<endl;

    cout<<endl;
    cout << "Total yang harus dibayar = Rp. " << total_belanja << endl << endl;
    cout<<"                     \n*** T E R I M A  K A S I H ***";
    cout << endl << endl << endl;

    return 0;
}
