/*
2017-09-22 18:47:19
https://codeforces.com/contest/847/problem/B
*/
#include <bits/stdc++.h>
 
using namespace std;
const int RAN = 2e5 + 5;
int n, A[RAN], B[RAN], c;
vector<int> v[RAN];
 
int main(){
    
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    	 scanf ("%d", &A[i]);
 
    v[0].push_back (A[0]);
    B[c++] = A[0];
    for (int i = 1; i < n; i++){
 
         int p = c;
         int ini = 0, fin = c-1;
         
         while (ini <= fin){
         	   int piv = (ini+fin)/2;
         	   if (B[piv] > A[i])
         	   	   ini = piv+1;
         	   	else
         	   	   fin = piv - 1, p = piv;	
         }
 
         v[p].push_back (A[i]);
 
         if (p < c){
         	 B[p] = A[i];
         }
         else{
         	B[c++] = A[i];
         }
    } 	
    
    for (int i = 0; i < c; i++){
    	 printf ("%d", v[i][0]);
    	 for (int j = 1; j < (int)v[i].size(); j++)
    	 	  printf (" %d", v[i][j]);
    	 printf ("\n"); 	
    }
 
	return 0;
}