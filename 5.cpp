#include<iostream>
using namespace std;
int main(){
int row,column;
cout<<"enter no of rows:";
cin>>row;
for(int i=0;i<row;i++){
for(int j=1;j<row-i;j++){
cout<<"*";
}
cout<<endl;
}
return 0;
}
