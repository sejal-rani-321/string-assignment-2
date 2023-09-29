/* 
Input a string and concatenate with its reverse string and print it.
Input : str = "PWSkills"
Output : "PWSkillssllikSWP"
Input : str = "pw"
Output : "pwwp"
 */

#include<iostream> 
using namespace std;

string reverseSecondPart(string s,int len){

    int starte = 0;
    int end = len - 1;
    while(starte <= end){
        swap(s[starte++],s[end--]);
    }
    return s;
 }

int length(char s[]){
    int count = 0;
    for (int i = 0; i < s[0] != '\0'; i++){
        count++;
    }return count;
}

int main(){
    string s;
    cout << "enter a string : " << endl;
    cin >> s;
    int len = s.length();
 
    cout << s + reverseSecondPart(s,len) << endl;
}