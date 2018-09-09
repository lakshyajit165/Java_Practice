/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 1 September, 2018, 5:21 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int fact(int x){
    if(x == 0 || x == 1)
        return(1);
    else{
        return(x*fact(x-1));
    }
}
int main() {

    int n,d,temp,sum = 0;
    
    cin>>n;
    temp = n;
    while(n>0){
        d = n % 10;
        sum += fact(d);
       
        n /= 10;
    }
    
    if(temp == sum)
        cout<<"It is a Strong Number";
    else
        cout<<"Not a Strong Number";
    return 0;
}

