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

void checkGCD(int n1, int n2) {
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    cout << gcd << endl;
}

int euclidGCD(int n1, int n2) {
    while (n1 > 0 && n2 > 0) {
        if (n1>n2) {
            n1 = n1 % n2;
        } else {
            n2 = n2 % n1;
        }
    }

    if (n1 ==0)
    {
        return n2;
    }  else {
        return n1;
    }
            

}

int checkArmstrongNumber(int n) {
    int originalNum = n;
    int temp = n;
    int sum = 0;
    double digits = 0;
    while (temp > 0) {
        temp = temp / 10;
        digits++;
    }

    int temp2 = n;

    while (temp2 > 0)
    {
        int lastDigit = temp2 % 10;
        sum = sum + pow(lastDigit, digits);
        temp2 = temp2 / 10;
    }

    if (sum == originalNum) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}
    
int checkAN(int n) {
    int k =to_string(n).length();
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, k);
        temp /= 10;
    }
    if (sum == n) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
    return 0;
}

int main() {
     int n;
     cin >> n;
    // int n1, n2;
    // cin >> n1 >> n2;
    // countDigits(n);
    // reverseNumber(n); // just spits out digits and not actually revrresing the number
    // reverseNumber2(n); // actually reverses the number
    // checkPalindrome(n);
    // checkGCD(n1, n2);
    // euclidGCD(n1, n2);
    // cout << euclidGCD(n1, n2) << endl;
    // checkArmstrongNumber(n); // slower bec 2 loops
    checkAN(n);
    return 0;
}