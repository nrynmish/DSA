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

int printSum(int n) {
    if (n == 1) {
        return 1;
    }

    return n + printSum(n-1);
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } 
    return fibonacci(n-1) + fibonacci(n-2);
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
    // printNumbersBacktrackingReverse(n, n);
    // cout << "Sum of numbers from 1 to " << n << " is: " << printSum(n) << endl;
    // cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // reverseArray(arr, 0, size - 1);
    cout << fibonacci(n) << endl;
    return 0;
}