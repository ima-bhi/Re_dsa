//PB6 -PRINT 1 TO N :https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1

#include<bits/stdc++.h>
using namespace std;

void printNos(int n) {
        // Your code here
       if(n == 0) return;
        printNos(n-1);
        cout<< n << " ";
}
int main() {
  int n;
  cin >> n;
  printNos(n);
}