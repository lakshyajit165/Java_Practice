/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 5 September, 2018, 11:49 AM
 */

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int isPrime(int x){
    
    int flag = 1;
    for(int i = 2; i<=x/2; i++){
        if(x % i == 0){
            flag = 0;
            break;
        }
            
    }
    return flag;
}

int main(int argc, char** argv) {
int n;
    ll sum = 0;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    for(int i = 0; i<n; i++){
        
        if(i == 0)
            sum += A[i];
        else if(isPrime(i+1)){
            sum += A[i];
            
        }    
    }    
    cout<<sum;
    return 0;
}

