// BAI5_Tinh chu vi,Dien tich,HCN,HT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double tinhtong(double d, double r, double c) {
    double sum = (d +r) * c;
    return sum;
}
int main()

{


    cout << "CHUONG TRINH TINH TONG BA SO\n";
    int so1, so2, so3, tong;
    int tong;
    // so1 = 3;
    // so2 = 9;
    // so2 = 3;
    cout << " nhap so 1: ";
    cin >> so1;
    cout << " nhap so 2: ";
    cin >> so2;
    cout << " nhap so 3: ";
    cin >> so3;
    /*
    tong = (so1 + so2) * so3;
    cout << "tong ba so: " << so1 << " + " << so2 << " = " << tong << endl;
    */
    cout << "tong ba so: " << so1 << " + " << so2 << " = " << tinhtong(so1, so2, so3) << endl;
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
