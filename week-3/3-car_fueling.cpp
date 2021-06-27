/*
author:-Anurag Mishra
problem:-algo_tb(week3(problem-3))
*/
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int car_fueling(int tot_dist, int max_dis, vector<int>&v, int count = 0)
{
    int c= 0;
    int refillPos = -2;
    int i = 0;
    int currLocation = 0;
    v.push_back(tot_dist);
    while (true)
    {
        if (max_dis+currLocation>=tot_dist)
        {
            return c;
        }
        if (max_dis<v[i]-currLocation)
        {
            refillPos=i-1;
            if (currLocation==v[refillPos])
            {
                return -1;
            }
            c++;
            currLocation = v[i - 1];
            i-=1;
            continue;
        }
        i++;
    }
    return -1;
}

int main()
{
int d,m,n;
cin>>d>>m>>n;
    vector<int>v(n);
    for (size_t i = 0; i < n; ++i)
        cin >>v.at(i);

    cout << car_fueling(d, m, v) << "\n";

    return 0;
}
