/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 1 September, 2018, 5:35 PM
 */


#include <stdio.h>
#include <stdlib.h>


/*
 * 
 */
int fact(int x){
    
    if(x == 0 || x == 1)
        return(1);
    else
        return(x*fact(x-1));
}
int main(int argc, char** argv) {

    int n = atoi(argv[1]);
    int d,temp,sum = 0;
    temp = n;
    while(n > 0){
        d = n % 10;
        sum += fact(d);
        n /= 10;
    }
    if(temp == sum)
        printf("It is a Strong number");
    else
        printf("Not a strong number"); 
    return 0;
}

