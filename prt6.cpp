#include <iostream>
#include <vector>
using namespace std;

int getTotalX(vector<int> a, vector<int> b, int n, int m)
{
    int count = 0;
    int p=0;
    int q=0;

    for (int i = a.at(n - 1); i <= b.at(0); i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            if (i % a[j] == 0)
            {
                p++;
            }
        }
        for (int k = 0; k < m; k++)
        {
            if (b[k] % i == 0)
            {
                q++;
            }
        }
        
        if ((p+q) == (m + n))
        {
            count++;
        }
        p=0;q=0;
        
    }

    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int p;
    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        a.push_back(p);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> p;
        b.push_back(p);
    }

    cout << getTotalX(a, b, n, m);
    return 0;
}
