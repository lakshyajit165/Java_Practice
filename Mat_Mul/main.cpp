/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 2 September, 2018, 12:02 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    int m,n1,n2,p;
    cin>>m>>n1;
    cin>>n2>>p;
    int A[m][n1],B[n2][p],C[m][p];
    
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n1; j++){
            cin>>A[i][j];
        }
    }
    for(int i = 0; i<n2; i++){
        for(int j = 0; j<p; j++){
            cin>>B[i][j];
        }
    }
    
    for(int i = 0; i<m; i++)
        for(int j = 0; j<p; j++)
            C[i][j] = 0;
    if(n1!=n2)
        cout<<"Multiplication Not Possible!";
    else{
        for(int i = 0; i<m; i++){
            for(int j = 0; j<p; j++){
                for(int k = 0; k<n1; k++){
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        for(int i = 0; i<m; i++){
            for(int j = 0; j<p; j++){
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

