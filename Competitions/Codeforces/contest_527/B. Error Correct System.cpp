/*
2015-03-27 20:28:58
https://codeforces.com/contest/527/problem/B
*/
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
 
using namespace std;
 
string a,b;
int i,j,n;
int ans, s[256][256];
 
int main(){
 
    cin >> n >> a >> b;
 
 
    for (i=0;i<n;i++) ans+=a[i]!=b[i];
 
    for (i=0;i<n;i++)
         if (a[i]!=b[i])
             s[a[i]-='a'][b[i]-='a']=i+1;
 
    for (i=0;i<n;i++)
        if (a[i]!=b[i] && s[b[i]][a[i]]){
            cout<<ans-2<<'\n'<<i+1<<' '<<s[b[i]][a[i]];
            return 0;
    }
 
    for (i=0;i<n;i++) if (a[i]!=b[i])
        for (int j=0;j<26;j++)
             if (s[b[i]][j]){
                 cout<<ans-1<<'\n'<<i+1<<' '<<s[b[i]][j];
                 return 0;
        }
 
    cout<<ans<<'\n'<<"-1 -1";
}