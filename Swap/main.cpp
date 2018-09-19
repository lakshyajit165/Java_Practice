/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 19 September, 2018, 4:34 PM
 */

#include <iostream>

using namespace std;
void swap(int &x, int &y){
    
    int temp = x;
    x = y;
    y = temp;
}
/*
 * 
 */
int main() {
    
    int a = 100;
    int b = 200;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}

