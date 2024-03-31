#include<bits/stdc++.h>
using namespace std;
int n,k ,a[200005];
long long check(long long time){
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=time/a[i];
    }
    return sum>=k;
}
int main(){
    cin>>n>>k;
    int l=0, r= 1ll *k* (*min_element(a,a+n));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans=-1;
    while(l<=r){
        long long mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans;
}