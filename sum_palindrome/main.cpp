/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 14 September, 2018, 9:40 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int revno(int num){
    
    int digit,rev = 0;
    while(num!=0){
        digit = num % 10;
        rev = rev*10+digit;
        num /= 10;
    }
    return(rev);
}
int palin(int num){
    
    int temp,digit,rev = 0;
    temp = num;
    while(num!=0){
        digit = num % 10;
        rev = rev*10+digit;
        num /= 10;
    }
    if(temp == rev)
        return(1);
    else
        return(0);
}
int main() {

    int t,count = 0;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    while(count <= 5){
               if(palin(n)){
                   cout<<n<<endl;
                   break;
               }else{
                    n = n + revno(n);
                    count += 1;
                    if(palin(n)){
                        cout<<n<<endl;
                        break;
                    }
                    else{
                        continue;
                    }
               }    
	            
	    }
	    
    }
    return 0;
}

