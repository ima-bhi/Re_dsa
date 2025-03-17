//PB1- COUNT DIGITS : https://www.geeksforgeeks.org/problems/count-digits5716/1

#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
   int num = n;
   int count = 0;
   while (n > 0) {
      //insert unique value on set
      int r = n % 10;
      if (r != 0) {
         if (num % r == 0) {
            //divisible
            count++;
         }
      }
      n = n / 10;
   }
   cout << count;
}
int main() {
   int n;
   cin >> n;
   solve(n);
}