#include <iostream>
using namespace std;

int main()
{
    int a1[20], a2[30], a3[40], n1, i, n2, sum;
    
    i = 0;
    // first number
    cin >> n1;
    while (n1 != 0)
    {
        a1[i] = n1 % 2;
        n1 = n1 / 2;
        i++;
    }
    for (int j1 = i - 1; j1 >= 0; j1--)
        cout << a1[j1];
    cout << endl;


    // second number
    int i1 = 0;
    cin >> n2;
    while (n2 != 0)
    {
        a1[i1] = n2 % 2;
        n2 = n2 / 2;
        i1++;
    }
    for (int j2 = i1 - 1; j2 >= 0; j2--)
        cout << a2[j2];
    cout << endl;


    // sum binary
    int i2 = 0;
    sum = n1 + n2;
    cout << sum << endl;
    while (sum != 0)
    {
        a3[i2] = sum % 2;
        sum = sum / 2;
        i2++;
    }
    for (int j3 = i2 - 1; j3 >= 0; j3--)
        cout << n1 << "+" << n2 << a3[j3];
    cout << endl;

    return 0;
}
