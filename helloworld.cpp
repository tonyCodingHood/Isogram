#include<iostream>
#include<string>
#include <bits/stdc++.h>
    //isogram has no repeated letters
    std::string is_isogram(std::string str) 
{ 
    int len = str.length(); 
  
    // Convert the string in lower case letters 
    for (int i = 0; i < len; i++) 
        str[i] = tolower(str[i]); 
  
    sort(str.begin(), str.end()); 
  
    for (int i = 0; i < len; i++) { 
        if (str[i] == str[i + 1]) 
            return "False"; 
    } 
    return "True"; 
}
    int main(int argc, char *argv[]){
       std::string str1 ="Machine"; 
    std::cout << is_isogram(str1) <<std:: endl;
     std::string str4 = "Alphabet"; 
    std::cout << is_isogram(str4) << std::endl; 
  
  

}
