#include <iostream>
using namespace std;

int main()
{
    int p[103], n;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    int k = 1;

    while (k <= n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (p[i] == k)
            {
                cout << i;
                break;
            }
        }
        if (k < n)
            cout << " ";
        k = k + 1;
    }
    cout << endl;

    return 0;
}
