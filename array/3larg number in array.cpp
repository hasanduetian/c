#include <iostream>
using namespace std;

int main()
{
    int a[50], n, i;
    cout << "enter the number ";
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];

    int max1 = a[0];
    for (i = 1; i < n; i++){
        if (a[i] > max1)
            max1 = a[i];
    }

    int max2 = -9999999;
    for (i = 0; i < n; i++){
        if (a[i] != max1)
            max2 = a[i];
    }
    int max3 = -99999999999999999;
    for (i = 1; i < n; i++){
        if (a[i]!= max1 && a[i] != max2)
            max3 = a[i];
    }

    cout << "the first maximum number is  ";
    cout << max1;
    cout << "the seond maximum number is  ";
    cout << max2;
    cout << "the third maximum number is  ";
    cout << max3;

    return 0;
}
