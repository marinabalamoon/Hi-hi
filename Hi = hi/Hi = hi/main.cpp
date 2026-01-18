//
//  main.cpp
//  Hi = hi
//
//  Created by Marina Balamoon on 1/15/26.
//

#include <iostream>
#include <cctype>
#include <string>
#include <cassert>

using namespace std;

int strcmp_case_insensitive(string s1, string s2){
    
    int i = 0;
    
    while(i < (int)s1.length() && i < (int)s2.length()){
        
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        
        if(c1 < c2){
            return -1;
        }
        else if(c1 > c2){
            return 1;
        }
        i++;
    }
        
    if(s1.length() == s2.length()){
        return 0;
    }
    else if(s1.length() > s2.length()){
        return -1;
    }
    else {
        return 1;
    }
}

int main(){

    assert(strcmp_case_insensitive("String 1", "string 2") == -1);
    assert(strcmp_case_insensitive("String 1", "string 1") == 0);
    assert(strcmp_case_insensitive("String 2", "string 1") == 1);
}
