/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 20 September, 2018, 11:28 PM
 */

#include <iostream>
#include<string>
using namespace std;

/*
 * 
 */
int main() {
    
    string s;
    char temp;
    cin>>s;
    int len = s.size();
    for(int i = 0; i<=len/2; i++){
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
    cout<<s;
    return 0;
}

