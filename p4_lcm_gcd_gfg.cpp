//PB4 - LCM AND HCF : https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

#include<bits/stdc++.h>

using namespace std;

void solve(int n) {
   int a, b;
   cin >> a >> b;
   int minm = a, maxm = b;
   if (a < b) {
      maxm = b;
      minm = a;
   }
   while (maxm % minm != 0) {
      // find rem
      int r = maxm % minm;
      maxm = minm;
      minm = r;
   }
   int lcmm = (a * b) / minm;
   cout << lcmm << " " << minm;
}
int main() {
   int n;
   cin >> n;
   solve(n);
}