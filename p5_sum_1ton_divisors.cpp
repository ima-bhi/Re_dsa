//PB2 - SUM 1 to N Divisors :https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += (i * (n / i));
  }
  cout << sum;
}
int main() {
  int n;
  cin >> n;
  solve(n);
}