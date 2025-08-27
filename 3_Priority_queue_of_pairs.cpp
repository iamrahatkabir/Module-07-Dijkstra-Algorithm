#include<bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int, vector<int>, greater<int>> pq;
    // pq.push(10);
    // pq.push(5);


    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;


    pq.push({10, 5});
    pq.push({5,2});

    cout << pq.top().first << " " << pq.top().second << endl;

    return 0;
}
