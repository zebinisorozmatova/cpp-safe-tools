#include <iostream>
using namespace std;

// Safe integer input
int getInt() {
    int x;
    while (!(cin >> x)) {
        cin.clear(); // xatoni tozalash
        cin.ignore(1000, '\n'); // noto‘g‘ri inputni tashlash
        cout << "Xato! Son kiriting: ";
    }
    return x;
}

int main() {
    cout << "Son kiriting: ";
    int a = getInt();

    cout << "Kiritilgan son: " << a << endl;
    return 0;
}