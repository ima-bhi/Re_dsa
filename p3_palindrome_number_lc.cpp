//PB3 - PALINDROME NUMBER :https://leetcode.com/problems/palindrome-number/description/

#include<bits/stdc++.h>
 
using namespace std;
 
bool solve(int n) {
    string str=to_string(n);
    int l=0,r=str.length()-1;
    while(l<=r){
        if(str[l]!= str[r]){
            return false;
        }
        l++;
        r--;
    }
return true;
}
int main() {
  int n;
  cin >> n;
  cout<<solve(n);
}