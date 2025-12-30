#include <iostream>
#include <math.h>
using namespace std;

void countDigits(int n) {
    int count = 0;
    while (n>0) {
        n= n/10 ;
        count++ ;
    }
    cout << count << endl;
}

void reverseNumber(int n) {
    
    while (n>0) {
        int digit = n % 10;
        cout << digit;
        n = n / 10;
    }
    cout << endl;
}

void reverseNumber2(int n) {
    int reversedNum = 0;
    while (n>0) {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        n = n / 10;
    }
    cout << reversedNum << endl;
}

void checkPalindrome(int n) {
    int originalNum = n;
    int reversedNum = 0;
    while (n>0) {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        n = n / 10;
    }
    if (originalNum == reversedNum) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
}   

int main() {
    int n;
    cin >> n;
    // countDigits(n);
    // reverseNumber(n); // just spits out digits and not actually revrresing the number
    // reverseNumber2(n); // actually reverses the number
    checkPalindrome(n);
    return 0;
}