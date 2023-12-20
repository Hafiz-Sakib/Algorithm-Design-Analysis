#include <bits/stdc++.h>
using namespace std;
bool customCompare(const pair<int, int> &a, const pair<int, int> &b)
{
    // Custom comparison logic
    if (a.first > b.first)
    {
        return true; // First value of 'a' is greater
    }
    else if (a.first == b.first)
    {
        return a.second < b.second; // Second value of 'a' is smaller
    }
    else
    {
        return false; // First value of 'a' is not greater
    }
}

int main()
{
    // Sample vector of pairs
    vector<pair<int, int>> myVector = {{5, 2}, {8, 1}, {5, 3}, {7, 2}, {8, 3}};

    // Sorting using the custom comparison function
    sort(myVector.begin(), myVector.end(), customCompare);

    // Displaying the sorted vector
    cout << "Sorted Vector:\n";
    for (const auto &pair : myVector)
    {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }

    return 0;
}
