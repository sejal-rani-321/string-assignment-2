/*
  Given a sentence ‘str’, return the word that is lexicographically maximum.
Input : str = "proud to be pwians"
Output : pwians
Input : str = "decode dsa with pw"
Output : with
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

string islexicographically(string s){
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss>>temp){
    v.push_back(temp);
    }
    string mx = " ";
    cout << endl;
    for (int i = 0; i < v.size(); ++i){
    
    mx = max(mx,v[i]);
   }
  return mx;  
}

int main(){
  string s = "decode dsa with pw";
  getline(cin,s);
  cout << islexicographically(s);
}