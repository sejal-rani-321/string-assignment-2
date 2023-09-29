/* 
Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8
Input : str = "1241"
Output : 2
 */
#include<iostream>
using namespace std;

int secondLargestNo(string s, int len){
    int fmax = -1;
    int smax = -1;
    for (int i = 0; i <= len; i++) {
        if (s[i]) {
            int num = 0; 
            num = num * 10 + (s[i] - 48);
            if (num > fmax) {
                smax = fmax;
                fmax = num;
            } 
            else if (num < fmax && num > smax) {
                smax = num;}
        }
    }

  cout << smax;
}

int main(){
    string  s = "2947578";
    int len = s.length();
    secondLargestNo(s,len);
    return 0;
}