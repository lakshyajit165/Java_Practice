/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 9 September, 2018, 7:34 PM
 */

#include<iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    int n,flag,count = 0;
    cin>>n;
    int num = 2;
    while(num){
        flag = 0;
        for(int i = 2; i<=num/2; i++){
            if(num % i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            count += 1;
            if(count == n){
                cout<<num<<endl;
                break;
            }    
        }
        num += 1;
    }
    return 0;
}

