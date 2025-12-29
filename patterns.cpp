#include <iostream>
using namespace std;

void printPattern1(int n) {
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern2(int n) {
    for (int i = 1; i < n+1; i++)
    {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern3(int n) {
    for (int i = 2; i < n + 2; i++)
    {
        for (int j = 1; j < i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void printPattern4(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern5(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 1; j < i+1; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void printPattern6(int n) {
    for (int i = 0; i < n; i++) {

        for (int j =0; j < n-i-1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2*i+1; k++) {
            cout << "*";
        }
        for (int l = 0; l < n-i-1; l++) {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern7(int n) {
    for (int i = n-1 ; i >= 0; i--) {

        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2*i+1; k++) {
            cout << "*";
        }
        for (int l = 0; l < n-i-1; l++) {
            cout << " ";
        }
        cout << endl;
    }
}
 
void printPattern8(int n) {
    for (int i = 1; i <= 2*n-1; i++) {
        
        int stars = i;
        if (i>n) stars = 2*n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern9(int n) {
    for (int i = 0; i<=n; i++) {
        int start = 1;
        if (i % 2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

int main() {

    int n;
    cin >> n; 
    // printPattern1(n);
    // printPattern2(n);
    //printPattern3(n);
    // printPattern4(n);
    // printPattern5(n);
    // printPattern6(n);
    // printPattern7(n);
    // printPattern8(n);
    printPattern9(n);
    return 0;
}   