/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 2 October, 2018, 8:56 PM
 */

#include <iostream>
#include<algorithm>
using namespace std;

bool comp(int a, int b){
    return (a<b);
}
int main() {

    int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 }; 
    int lar = *std::max_element(v+2,v+9,comp);
    cout<<lar;
    return 0;
}

