#include <iostream>
using namespace std;

void printName(int n, string s) {
    if (n == 0) {
        return;
    }
    cout << s << endl;
    printName(n-1, s);
}

void printNumbers(int n) {
    if (n == 0) {
        return;
    }
    printNumbers(n-1);
    cout << n << " ";
}

void printNumbersReverse(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printNumbersReverse(n-1);
}

void printNumbersBacktracking(int i, int n) {
    if (i < 1) {
        return;
    }
    printNumbersBacktracking(i-1, n);
    cout << i << " ";
}

void printNumbersBacktrackingReverse(int i, int n) {
    if (i < 1) {
        return;
    }
    cout << i << " ";
    printNumbersBacktrackingReverse(i-1, n);
}

int main() {
    int n;
    // string s;
    cout << "Enter a number: " << '\n';
    cin >> n;
    // cout << "Enter a name: " << '\n';
    // cin >> s;
    // printName(n, s);
    // printNumbers(n);
    // printNumbersReverse(n);
    // printNumbersBacktracking(n, n);
    printNumbersBacktrackingReverse(n, n);
    return 0;
}