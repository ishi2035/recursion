#include<iostream>
using namespace std;
void no(int n){
    if(n==0) return;
    cout<<n<<" ";
    no(n-1);
}
int main(){
    int n;
    cin>>n;
    no(n);
}
