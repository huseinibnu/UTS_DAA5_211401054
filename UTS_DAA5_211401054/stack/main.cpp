#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Program untuk membalikkan kata yang dimasukkan
    stack<char> kata;
    string input;

    cout << "Masukkan kata yang akan dibalik : ";
    getline (cin, input);

    for (int i = 0; i < input.length(); i++) {
        kata.push(input[i]);
        cout << input[i] << ", ";
    }

    cout << "\n\n";

    while(!kata.empty()) {
        cout << kata.top() << ", ";
        kata.pop();
    }
    cout << endl << endl;

    cout << "Apakah stack kosong? ";
    if (kata.empty())
        cout << "ya, stack kosong\n";
    else
        cout << "tidak, stack belum kosong\n";

    cout << "\n\n";

    return 0;
}
