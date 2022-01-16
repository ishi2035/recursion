#include<iostream>
using namespace std;
float sum(int n){
   if (n==0) return n;
   int s=0;
   for(int i =1;i<=n;i++) s+=i;
   return s+sum(n-1);

}

int main(void){
     int n;
     cin>>n;
     cout<<endl<<sum(n);
     return 0;
}
