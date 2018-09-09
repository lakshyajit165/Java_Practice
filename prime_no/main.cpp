/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 29 August, 2018, 11:31 AM
 */

#include<bits/stdc++.h>
using namespace std;

/*
 * 
 */
int main() {
    
    int n,flag = 0;
    cin>>n;
    for(int i = 2; i<n/2; i++){
       if(n % i == 0){
           flag = 1;
           break;
       } 
    }
    if(flag)
        cout<<"Not a prime number";
    else
        cout<<"It is a prime number";
    return 0;
}

