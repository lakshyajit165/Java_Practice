/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 2 October, 2018, 7:58 PM
 */

#include <iostream>

using namespace std;
int calc(int A[], int n, int sum){
    
    int curr_sum = A[0], start = 0, i;
    for(i = 1; i<=n; i++){
        
        while(curr_sum > sum && start < i-1){
            curr_sum -= A[start];
            start++;
        }
        if(curr_sum == sum){
            cout<<start+1<<" "<<i<<endl;
            return 1;
        }    
        if(i < n)
            curr_sum += A[i];
    }
    cout<<"-1"<<endl;
    return 0;
}
int main() {
    
    int t,n,sum;
    cin>>t;
    while(t--){
        cin>>n>>sum;
        int A[n];
        for(int i = 0; i<n; i++){
            cin>>A[i];
        }
        calc(A,n,sum);
    }
    return 0;
}

