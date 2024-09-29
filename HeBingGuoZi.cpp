#include <bits/stdc++.h>

using namespace std;

/* Your Notes: */
/* */
priority_queue<int, vector<int>, greater<int>> minheap;
int n;
int cur = 0;
int ans = 0;
int main()
{
    cin >> n;
    int num = 0;
    while (n--)
    {
        cin >> num;
        minheap.push(num);
    }

    // 第一堆:
    for (int i = 0; i < 2; i++)
    {
        if (minheap.empty())
            break;
        ans += minheap.top();
        minheap.pop();
    }
    while (!minheap.empty())
    {
        cur += minheap.top();
        minheap.pop();
        ans += ans + cur;
    }
    cout << ans;
    return 0;
}