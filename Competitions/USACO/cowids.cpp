/*
Ruddy Guerrero Alvares
Caibarien-Villa Clara
IDs Vacunos\cowids\USACO\
2012\febrero\plata
*/
#include <cstdio>
#include <algorithm>


using namespace std;

long long a, b, d,n, m, A1, B1, AB, con;

int formula(int a,int b){
    A1 = 1;
    B1 = 1;
    for (int i = 1; i <= b; i++)
         B1*=i; 
    for (int i = a-b+1; i <= a; i++)
         A1 *= i;
    return A1 / B1;
}

void imprimir (int con, int np, int nb){
      printf ("1");
      while (np >= 1){
           np--;
           if (con + formula(np, nb) >= n){
               printf ("0");          
           }
            else{
               printf ("1");
               con += formula(np,nb);
               nb--; 
            } 
      }          
}

int main(){
     
     freopen ("cowids.in","r",stdin);
     freopen ("cowids.out","w",stdout);
     
     scanf ("%d %d\n", &n, &m);
     
     a = m-1;
     b = m-1;
    do{
            d = con;
            con += formula (a, b); 
            a++;   
     } while (con  < n);
     
     imprimir (d, a-1, m-1);  
   
     return 0;
     }                                       
