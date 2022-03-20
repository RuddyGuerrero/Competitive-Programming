/*
2017-10-24 23:22:31
https://codeforces.com/contest/883/problem/F
*/
#include <bits/stdc++.h>
 
using namespace std;
 
string A;
set <string> s;
int n;
 
int main(){
 
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
 
   cin>>n;
 
   for (int i = 0 ; i < n  ; i++){
        cin>>A;
        bool p = false;
        string y = "";
        for (int j = 0 ; j < A.size() ; j++){
            if (A[j] == 'u')y += "oo";
            else y += A[j];
        }
 
        while (p == false){
            A = y;
            p = true;
            y = "";
            for (int j = 0 ; j < A.size(); j++){
                if (j < A.size() - 1 and A[j] == 'k' and A[j + 1] == 'h'){
                    y += 'h';
                    j++;
                    p = false;
                }
                else {
                    y += A[j];
                }
            }
        }
        s.insert(A);
   }
 
    cout<<s.size()<<"\n";
return 0;
 
}