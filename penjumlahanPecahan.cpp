#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, pengkali_1 = 1, pengkali_2 = 1, temp_1, temp_2;
    long long e, f;
    cin >> a >> b;
    cin >> c >> d;
    temp_1 = b;
    temp_2 = d;

    while (b != d)
        {
            if(b < d){
                b += temp_1;
                pengkali_1++;
            }else{
                d += temp_2;;
                pengkali_2++;
            }
        }

    e = a * pengkali_1 + c * pengkali_2;
    f = b;

    cout << e << " " << f;
    
}
