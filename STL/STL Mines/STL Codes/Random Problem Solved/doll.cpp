#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long eyes, mouth, body;
    cin >> eyes >> mouth >> body;

    int count = 0;

    while (eyes != 0 && body != 0)
    {
        // One eye, one mouth, and one body.
        if (eyes >= 1 && mouth >= 1 && body >= 1)
        {
            count++;
            eyes--;
            mouth--;
            body--;
        }
        // Two eyes and one body.
        else if (eyes >= 2 && body >= 1)
        {
            count++;
            eyes -= 2;
            body--;
        }
        // Two eyes, one mouth, and one body.
        else if (eyes >= 2 && mouth >= 1 && body >= 1)
        {
            count++;
            eyes -= 2;
            mouth--;
            body--;
        }
    }

    printf("%d\n", count);
    return 0;
}