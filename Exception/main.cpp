/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 19 September, 2018, 11:43 PM
 */

#include <iostream>

using namespace std;

double division(int a, int b){
    
    if(b == 0){
        throw "Division By zero not possible!";
    }else{
        return(a/b);
    }
    
}
int main() {
    
    int a,b;
    cin>>a>>b;
    try{
        cout<<division(a,b);
    }catch(const char *msg){
        cerr<<msg<<endl;
    }
    return 0;
}

