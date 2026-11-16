//stack.cpp (UNGUIDED)
#include <iostream>
#include "stack.h"

using namespace std;

// Membuat Stack kosong
void createStack(Stack &S) {
    S.top = 0;
}

// Mengecek dan menambahkan data ke Stack
void push(Stack &S, infotype X) {
    if (S.top == 20) {
        cout << "Stack penuh!" << endl;
    } else {
        S.top++;
        S.info[S.top] = X;
    }
}

// Mengambil data paling atas dari Stack
infotype pop(Stack &S) {
    infotype X;

    if (S.top == 0) {
        cout << "Stack kosong!" << endl;
        return 0;
    } else {
        X = S.info[S.top];
        S.top--;
        return X;
    }
}

// Menampilkan seluruh isi Stack
void printInfo(Stack S) {
    if (S.top == 0) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "[TOP] ";

        for (int i = S.top; i >= 1; i--) {
            cout << S.info[i] << " ";
        }

        cout << endl;
    }
}

// Membalik urutan Stack
void balikStack(Stack &S) {
    int temp;
    int i = 1;
    int j = S.top;

    while (i < j) {
        temp = S.info[i];
        S.info[i] = S.info[j];
        S.info[j] = temp;

        i++;
        j--;
    }
}

// Memasukkan data secara ascending
void pushAscending(Stack &S, infotype X) {
    if (S.top == 20) {
        cout << "Stack penuh!" << endl;
    } else {
        int i = S.top;

        while (i >= 1 && S.info[i] > X) {
            S.info[i + 1] = S.info[i];
            i--;
        }

        S.info[i + 1] = X;
        S.top++;
    }
}

// Membaca input angka sampai pengguna menekan Enter
void getInputStream(Stack &S) {
    char input;

    cout << "Masukkan angka: ";

    while (cin.get(input) && input != '\n') {
        if (input >= '0' && input <= '9') {
            if (S.top < 20) {
                push(S, input - '0');
            } else {
                cout << "\nStack penuh! Input berikutnya diabaikan.";
                break;
            }
        }
    }
}
