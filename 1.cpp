/*wap to calculate factorial of a number using function*/
#include<iostream>
using namespace std;
int fact(int n){
int fact=1;
for(int i=n;i>0;i--){
fact=fact*i;
}
return fact;
}

int main(){
int facto=fact(5);
cout<<facto;
return 0;
}
