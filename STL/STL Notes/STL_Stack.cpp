#include <bits/stdc++.h>
using namespace std;
int main()
{
    // LIFO - Last in First out
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(5);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl
         << st.size();
    return 0;
}
