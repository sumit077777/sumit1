#include<iostream>
#include<math.h>

using namespace std;
int main(){
int num;
cin>>num;
int sum=0,rem,rem2,count=0;
int temp=num;
while(temp!=0)
{
rem2=temp%10;
temp=temp/10;
count++;
}
temp=num;

while(num!=0){
rem=num%10;
sum=sum+pow(rem,count);
num=num/10;
}

if(temp==sum){
cout<<temp<<"is armstrong no"<<endl;
}
return 0;
}

