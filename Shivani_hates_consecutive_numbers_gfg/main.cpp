/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 10 September, 2018, 9:37 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main() {
    
    int t,n,sum;
	cin>>t;
	while(t--){
	   sum = 0;
	   cin>>n;
	   int A[n];
	   for(int i = 0; i<n; i++)
	        cin>>A[i];
	   sort(A,A+n);
	   for(int i = n-1; i>=0; i--){
	       if(A[i] != -1){
	           sum += A[i];
	       
	           for(int j = n-2; j>=0; j--){
	               if(A[j] == A[i]-1){
	                   
	                   A[j] = -1;
	                   break;
	                   
	               }
	           
	           }
	       }else{
	           continue;
	       }    
	   }
	   cout<<sum<<endl;
	}
    return 0;
}

