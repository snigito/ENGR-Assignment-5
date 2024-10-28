#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <cctype>
#include <stdexcept>
using namespace std;


void matSub(int mA[3][3], int mB[3][3]){
    int mC[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            mC[i][j] = mA[i][j] - mB[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        cout << "| ";
        for(int j = 0; j < 3; j++){
            cout << mC[i][j] << " ";
        }
        cout << "|"<< endl;
    }
}

int main() {
    
    cout << "Enter 2 3x3 Matrices: " << endl;
    int mA[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "For Matrix A enter position: " << i << "x" << j << endl;
            cin >> mA[i][j];
        }
    }

    int mB[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "For Matrix B enter position: " << i << "x" << j << endl;
            cin >> mB[i][j];
        }
    }

    matSub(mA, mB);
    return 0;
}