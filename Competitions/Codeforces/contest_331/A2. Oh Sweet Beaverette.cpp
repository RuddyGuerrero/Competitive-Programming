/*
2016-04-05 17:41:21
https://codeforces.com/contest/331/problem/A2
*/
#include <bits/stdc++.h>
 
using namespace std;
 
long long n, con, t, c, T=-1e15, A[1000000];
long long S[1000000], s[1000000];
map<long long, int>m;
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
 
    cin >> n;
    for (int i = 1; i <= n; i++){
         cin >> A[i];
         m[A[i]] = i;
         S[i] = S[i-1];
         if (A[i] >= 0)
             S[i] += A[i];
        // S1[i] = S1[i-1]+A[i];
    }
 
    int ini, fin;
    for (int i = 1; i <= n; i++){
         if (m[A[i]] == i) continue;
         t = S[m[A[i]]]-S[i-1];
         if (A[i] < 0) t = t + A[i] + A[i];
         if (t > T){
             T = t;
             ini = i; fin = m[A[i]];
         }
    }
 
   for (int i = 1; i <= n; i++){
        if (i==ini||i==fin) continue;
 
        if (i < ini || i > fin || A[i] < 0) s[++c] = i;
   }
 
   cout << T << " " << c << "\n";
   if (c > 0)cout << s[1];
   for (int i = 2; i <= c; i++) cout << " " << s[i];
   cout <<"\n";
 
    return 0;
}