#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, a[100], S, X[100];

vector<int> v;

void nhap(){
    cin >> n >> S;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
}

void Try(int pos, int sum){
    for(int j = pos; j < n; j++){
        // X[i] = a[j]
        v.push_back(a[j]);
        sum += a[j];
        if(sum == S){
            cout << "[";
            for(int k = 0; k < v.size(); k++){
                cout << v[k];
                if(k != v.size() - 1) cout << " ";
                else cout << "]\n";
            }
        }
        else if(sum < S){
            Try(j + 1, sum);
        }
        sum -= a[j];
        v.pop_back();
    }
}
