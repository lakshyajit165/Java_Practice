/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 31 August, 2018, 9:21 PM
 */

#include<iostream>

using namespace std;
int GCD(int, int);
/*
 * 
 */
int main() {
    
    int a,b,hcf;
    cin>>a>>b;
    hcf = GCD(a,b);
    cout<<hcf;
    return 0;
}
int GCD(int x, int y){
    
    if(x < y)
        GCD(y,x);
    else{
        if(x%y == 0)
            return(y);
        else
            return(GCD(y,x%y));
    }
}

