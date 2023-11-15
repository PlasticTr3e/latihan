#include <iostream>
using namespace std;

int main()
{

    int *ptr;
    int x = 4;

    ptr = &x;

    cout << "Alamat yang ditunjuk ptr: " << ptr << "\n";
    cout << "Isi alamat ptr: " << *ptr << "\n";
    cout << "Alamat ptr: " << &ptr << "\n";
    cout << "Isi x: " << x << "\n";
    cout << "Alamat x: " << &x << "\n\n";

    *ptr = 8;
    cout << "Alamat yang ditunjuk ptr: " << ptr << "\n";
    cout << "Isi alamat ptr: " << *ptr << "\n";
    cout << "Alamat ptr: " << &ptr << "\n";
    cout << "Isi x: " << x << "\n";
    cout << "Alamat x: " << &x << "\n\n";

    x = 10;
    cout << "Alamat yang ditunjuk ptr: " << ptr << "\n";
    cout << "Isi alamat ptr: " << *ptr << "\n";
    cout << "Alamat ptr: " << &ptr << "\n";
    cout << "Isi x: " << x << "\n";
    cout << "Alamat x: " << &x << "\n";

    return 0;
}