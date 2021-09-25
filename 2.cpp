#include<iostream>
#define pi 3.14
using namespace std;
float area(float a,float b);
int  area(int  s);
float area(float r);

int main(){
float a,b,r;
int s;
cout<<"enter sides of rectangle:";
cin>>a>>b;
cout<<"enter side of square:";
cin>>s;
cout<<"enter radius of circle:";
cin>>r;
cout<<"area of rectangle:"<<area(a,b)<<endl;
cout<<"area of sqaure:"<<area(s)<<endl;
cout<<"are of circle:"<<area(r)<<endl;

return 0;

}

float area(float a, float b){
return a*b;
}
int  area(int s){
return (s*s);
}
float area(float r){
return (pi*r*r);
}
