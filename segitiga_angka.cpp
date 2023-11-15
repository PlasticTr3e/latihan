#include <iostream>
using namespace std;

int main()
{
    int penambah, pengurang, angka;

    for (int i = 1; i <= 5; i++)
    {
        angka = i;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                if (j <= 5)
                {
                    cout << angka++ << " ";
                }
                else if (j > 5)
                {
                    cout << angka-- << " ";
                }
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}