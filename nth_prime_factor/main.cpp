/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 1 September, 2018, 10:47 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int is_prime(int num){
    
    int flag = 0;
    for(int i = 2; i<=num/2; i++ ){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
    return flag;
    
}
int main() {
    
    int q,num,n,count;
    cin>>q;
    while(q--){
        count = 0;
        cin>>num>>n;
       for(int i = 2; i<=num/2; i++){
           if(num % i == 0){
               if(!is_prime(i))
                   count++;
               if(count == n){
                   cout<<i<<endl;
                   break;
               }
                   
           }
       }
    }
    return 0;
}

