/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 2 October, 2018, 8:52 PM
 */

#include <iostream>
#include<algorithm>
using namespace std;

/*
 * 
 */
int main() {
    
    int v[] = { 'a', 'c', 'k', 'd', 'e', 'f', 'h' };
    int* lar = std::max_element(v,v+4);
    cout<<char(*lar);
    return 0;
}

