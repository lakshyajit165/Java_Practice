/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 31 August, 2018, 9:26 PM
 */

#include <iostream>
#include<cmath>
using namespace std;

/*
 * 
 */
int main() {

    int n,d,temp,arm=0;
    cin>>n;
    temp = n;
    while(n!=0){
        d = n%10;
        arm+=(d*d*d);
        n/=10;
    }
    if(temp == arm){
        cout<<"Armstrong Number!"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}

