#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int getMoneySpent(int b, vector<int> key, vector<int> derives)
{
    sort(key.begin(), key.end(), greater<int>());
    sort(derives.begin(), derives.end(), greater<int>());
    int c = 0;
    for (int i = 0; i < key.size(); i++)
    {
        for (int j = 0; j < derives.size(); j++)
        {
            if (key[i] + derives[j] <= b && key[i] + derives[j] >= c)
            {
                c = key[i] + derives[j];
            }
        }
    }
     if (c == 0)
        {
            return -1;
        }
        else
        {
            return c;
        }
}  

    int main()
    {
        int b, n, m;
        cin >> b >> n >> m;

        vector<int> key;
        vector<int> derives;

        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            key.push_back(p);
        }
        for (int i = 0; i < m; i++)
        {
            int q;
            cin >> q;
            derives.push_back(q);
        }

        cout << getMoneySpent(b, key, derives);

        return 0;
    }