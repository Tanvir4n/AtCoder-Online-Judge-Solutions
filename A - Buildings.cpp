// find max building if no building is taller than the first one from the left, print -1.
#include<bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

void FastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int solution(int n, vector<int>& v){

    bool foundMax=false;
    int maxIndex=0;
    int maxElement=v[0];
    for(int i=1; i<n; i++){ //
        if(v[i] > v[0]){
            // maxElement = v[i];
            // maxIndex = i;
            // foundMax = true;
            return i+1;
        }
    } 
    return -1;
    //(foundMax) ? cout<<maxIndex : cout<<-1;
}

int32_t main(){
    FastIO();
    
    int n;
    cin>>n;
    
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    int res = solution(n, v); 

    cout<<res<<endl;
    
}
// https://atcoder.jp/contests/abc353/tasks/abc353_a
