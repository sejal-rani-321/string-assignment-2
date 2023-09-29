/* 
Input a string and return the number of substrings that contain only vowels.
Input : str = "abjkoe"
Output : 4
Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
Input : str = "hgdhpw"
Output : 0
 */
#include<iostream>
using namespace std;

 int length(char s[]){
     int count = 0;
     for (int i = 0; i < s[0] != '\0'; i++){
         count++;
     }
     return count;
 }

int vowel(string s){
    int count = 0;
    for (int i = 0; i <= s.length(); i++){
        if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
           count++;
        }
    }
    return count;
}

int main(){
     
    // string s = "abjkoe" ;
    string s = "hgdhpw" ;
    cout << " enter a string: "<<endl;
    cin >> s;
    cout << vowel(s);
}