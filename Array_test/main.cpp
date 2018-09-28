/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 28 September, 2018, 10:18 PM
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    string s;
    cin>>t;
    while(t--){
        int A[200];
        for(int i = 0; i<200; i++)
            A[i] = 0;
        cin>>s;
        for(int i = 0; i<s.size(); i++){
            A[s[i]]++;
        }
        
        for(int i = 0; i<200; i++){
            if(A[i]!=0)
                cout<<char(i)<<" "<<A[i]<<" "<<endl;
        }
        cout<<endl;
    }
    return 0;
}

