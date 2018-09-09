/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 31 August, 2018, 11:33 PM
 */

#include <bits/stdc++.h>
int convertFive(int n);
using namespace std;

/*
 * 
 */
int main() {
    
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<convertFive(n)<<endl;
    }
    return 0;
}
int convertFive(int n){
    
    int d,base = 1,num = 0;
    while(n!=0){
        d = n % 10;
        if(d == 0)
            num += base*5;
        else{
            num += base*d;        
        }
        base *= 10;
        n /= 10;
    }
    return(num);
}

