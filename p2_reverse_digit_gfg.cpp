//PB2 - REVERSE NUMBER :https://www.geeksforgeeks.org/problems/reverse-digit0316/1

#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
   int sum = 0;
   while (n > 0) {
      int r = n % 10;
      sum = sum * 10 + r;
      n = n / 10;
   }
   cout << sum;
}
int main() {
   int n;
   cin >> n;
   solve(n);
}