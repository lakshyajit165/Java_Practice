/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 28 September, 2018, 11:23 PM
 */

#include<bits/stdc++.h>

using namespace std;

struct Letters{
    
    Letters(): freq(0){}
    Letters(char letter, int freq){
        this->freq = freq;
        this->letter = letter;
    }
    char letter;
    int freq;
};
bool Greater(const Letters& a, const Letters& b){
    
    if(a.freq == b.freq)
        return a.letter < b.letter;
    
    return a.freq > b.freq;
}
int main() {
    
    cout<<"Enter a String";
    string input;
    getline(cin, input);
    
    vector<Letters> count;
    int letters[26] = {0};
    
    for(int i = 0; i<input.length(); i++){
        if((input[i] > 'A' && input[i] < 'Z') || (input[i] > 'a' && input[i] < 'z')){
            int c = tolower(input[i] - 'a');
            letters[c]++;
        }
    }
    
    for(int i = 0; i<26; i++){
        if(letters[i] > 0){
            char c = i + 'a';
            count.push_back(Letters(c,letters[i]));
        }
    }
    
    cout<<"Unsorted List .. \n";
    for(int i = 0; i<count.size(); i++){
        cout<<count[i].letter<<" = "<<count[i].freq<<"\n"; 
    }
    
    std::sort(count.begin(), count.end(), Greater);
    
    cout<<"Sorted according to frequency then alphabetically..\n";
    for(int i = 0; i<count.size(); i++){
        cout<<count[i].letter<<" = "<<count[i].freq<<"\n";
    }
    return 0;
}

