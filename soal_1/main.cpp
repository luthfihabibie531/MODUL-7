//main.cpp (UNGUIDED)
#include <iostream>
#include <limits>
#include "stack.h"

using namespace std;

int main() {
    Stack S;
    int pilihan;

    cout << "===== PROGRAM STACK =====" << endl;
    cout << "1. Latihan 1 - Stack Biasa" << endl;
    cout << "2. Latihan 2 - Push Ascending" << endl;
    cout << "3. Latihan 3 - Input Stream" << endl;
    cout << "Pilih latihan: ";
    cin >> pilihan;

    createStack(S);

    switch (pilihan) {

        case 1:
            cout << "\nHello world!" << endl;

            push(S, 3);
            push(S, 4);
            push(S, 8);

            pop(S);

            push(S, 2);
            push(S, 3);

            pop(S);

            push(S, 9);

            printInfo(S);

            cout << "balik stack" << endl;

            balikStack(S);

            printInfo(S);
            break;

        case 2:
            cout << "\nHello world!" << endl;

            pushAscending(S, 3);
            pushAscending(S, 4);
            pushAscending(S, 8);
            pushAscending(S, 2);
            pushAscending(S, 3);
            pushAscending(S, 9);

            printInfo(S);

            cout << "balik stack" << endl;

            balikStack(S);

            printInfo(S);
            break;

        case 3:
            cout << "\nHello world!" << endl;

            cin.ignore(
                numeric_limits<streamsize>::max(), '\n'
            );

            getInputStream(S);

            printInfo(S);

            cout << "balik stack" << endl;

            balikStack(S);

            printInfo(S);
            break;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}
