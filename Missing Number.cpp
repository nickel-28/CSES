//Missing Number

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int A[n];
    
    for(int i=0; i<n-1; ++i){
        cin >> A[i];
    }
    long long int sum = (n*(n+1))/2;
    long long int S=0;
    for(int i=0; i<n-1; ++i){
        S+=A[i];
    }
    cout << sum-S <<endl;
    
}