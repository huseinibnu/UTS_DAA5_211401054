#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> antrian;
    string kata;

    int total;

    cout << "======================================\n";
    cout << "Jumlah kata yang ingin dimasukkan : ";
    cin  >> total;
    cout << "======================================\n";

    for (int i = 0; i < total; i++) {
        cout << "Urutan kata ke- " << i + 1 << " : ";
        cin  >> kata;
        antrian.push(kata);
        cout << endl;
    }

    cout << "======================================\n";
    cout << "Antrian kata yang tersimpan : \n";
    cout << "======================================\n";
    while (antrian.size() != 0) {
        cout << antrian.front() << ", ";
        antrian.pop();
    }

    cout << endl << endl;

    return 0;
}
