/*
2017-09-22 18:21:49
https://codeforces.com/contest/847/problem/M
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int n, A[1005];
 
int main(){
 
 
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		 scanf ("%d", &A[i]);
 
    for (int i = 1; i < n; i++){
    	 if (A[i-1]-A[i] != A[0]-A[1]){
    	 	 printf ("%d\n", A[n-1]);
    	 	 return 0;
    	 }
    }		
 
    printf ("%d\n", A[n-1] - (A[0]-A[1]));
 
    return 0;
}