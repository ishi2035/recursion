#include<iostream>
using namespace std;
void TOH(int n,char A,char B,char C)
{

 if(n>0)
 {

 TOH(n-1,A,C,B);
cout<<"move from  "<<A<<" to "<<C<<endl;

 TOH(n-1,B,A,C);

 }
 else{return;}

}
int main(){
    int n;
    cin>>n;
    TOH(n,'a','b','c');
}
