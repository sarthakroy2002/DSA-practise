#include <bits/stdc++.h>

using namespace std;

void insert(stack<int> &st, int n)
{
    if (st.empty())
    {
        st.push(n);
        return;
    }
    int x = st.top();
    st.pop();
    insert(st, n);
    st.push(x);
}
void get(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int num = st.top();
    st.pop();

    // recursive call
    get(st);
    insert(st, num);
}
int main()
{
    // reverse using recursion
    stack<int> st;
    for (int i = 0; i < 5; i++)
    {
        st.push(i);
    }
    get(st);
    while (!st.empty())
    {
        cout << st.top()<<" " ;
        st.pop();
    }
}
