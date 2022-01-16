#include<iostream>
using namespace std;
float sum(int n){
   if(n==1) return 1;
   float s = 1.0/(n*n);  
   cout<<s<<" ";
   return s+sum(n-1);
}

int main(void){
     int n;
     cin>>n;
     cout<<endl<<sum(n);
     return 0;
}
