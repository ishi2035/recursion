#include<iostream>
using namespace std;
void no(int n){
    if(n==0) return;
    no(n-2);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    no(2*n);
}
