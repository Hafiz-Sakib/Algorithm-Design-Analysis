#include <bits/stdc++.h>
using namespace std;
#define pq priority_queue
int main()
{
    // Sort Greater to Smaller
    pq<int> pq1;
    pq1.push(5);
    pq1.push(8);
    pq1.push(7);
    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;

    // Sort Smaller to Greater
    pq<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(8);
    // emplace === push
    pq2.emplace(7);
    while (pq2.size() > 0)
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }

    pq<int> pq3;
    // Swap
    pq1.swap(pq3);
    return 0;
}
