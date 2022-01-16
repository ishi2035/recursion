#include<iostream>
using namespace std;
int fibo(int n,int a,int b){
   if(n==0) return a;
   if(n==1) return b;
   return fibo(n-1,b,a+b);
}

int main(void){
     int n;
     cin>>n;
     cout<<fibo(n,0,1);
     return 0;
}
