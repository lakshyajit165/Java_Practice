/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 16 September, 2018, 9:28 PM
 */

#include<iostream>
#include<cmath>
using namespace std;
int arr_to_num(int A[], int n){
    
    int num = 0;
    for(int i = 0; i<n; i++){
        
        num += A[i]*pow(10,n-1);
        n--;
    }
    return num;
}
int main() {

    int n,k,temp,swap = 0;
    cin>>n>>k;
    int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                swap+=1;
                break;
            }
        }
        int res = arr_to_num(A,n);
        cout<<res<<" ";
        if(swap == k)
            break;
       
    } 
    cout<<endl;
    for(int i = 0; i<n; i++)
        cout<<A[i]<<" ";
    return 0;
}

