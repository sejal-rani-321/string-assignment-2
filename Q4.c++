/* 
Given an array of strings. Check whether they are anagram or not.
Input : s = "car" , t = "arc"
Output : True
Input : s = "book" , t = "hook"
Output : False
 */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isanagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) return true;
    else return false;
}


int main(){
    string s ;
    getline(cin,s);
    string t ;
    getline(cin,s);
   
    int len = s.length();
    cout << isanagram(s,t);
}    

