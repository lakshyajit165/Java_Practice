/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 17 September, 2018, 11:48 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main() {
    
    int n;
    cin>>n;
    int A[n],mls[n];
    for(int i = 0; i<n; i++)
        mls[i] = 1;
    for(int i = 0; i<n; i++)
        cin>>A[i];
    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++)
        {
            if(abs(A[i] - A[j]) <= 1 && mls[i] < (mls[j] + 1))
                mls[i] = mls[j] + 1;
        }
    }
    int max = *std::max_element(mls,mls+n);
    cout<<max<<endl;
    return 0;
}

