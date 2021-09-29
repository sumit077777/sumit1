#include<iostream>
using namespace std;
int main(){
int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
int m;
cin>>m;
for(int i=0;i<m;i++){
int last=arr[size-1];

for(int j=size-1;j>0;j--){
arr[j]=arr[j-1];
}
arr[0]=last;
}

for(int i=0;i<size;i++){
cout<<" "<<arr[i];
}
return 0;

}
