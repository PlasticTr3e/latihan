#include <iostream>
using namespace std;

int main()
{

    int batas_atas, batas_bawah, faktor;
    cin >> batas_bawah;
    cin >> batas_atas;

    for (int i = batas_bawah; i <= batas_atas; i++)
    {
        faktor = 0;
        if (i == 1)
        {
            faktor = 1;
        }
        for (int j = 2; j < i; j++)
        {
            if (i == 2)
            {
                cout << i << " ";
            }
            if (i % j == 0)
            {
                faktor += 1;
            }
        }
        if (faktor == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}