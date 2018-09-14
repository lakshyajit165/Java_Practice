/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 14 September, 2018, 9:07 PM
 */

#include<iostream>
#include<string>

using namespace std;

/*
 * 
 */
void split_string(string s){
    
    string s1,s2,s3;
    s1 = s2 = s3 = "";
    for(int i = 0; i<s.size(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            s1+=s[i];
        else if(s[i] >= '0' && s[i] <= '9')
                s2+=s[i];
                else
                    s3+=s[i];
    }
    
    cout<<s1<<"\n"<<s2<<"\n"<<s3<<endl;
}
int main() {
    
    int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    split_string(s);
	}
	
    return 0;
}

