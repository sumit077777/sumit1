#include<iostream>
#include<cstdio>
using namespace std;
void student_detail(void);



int main(){
student_detail();
return 0;

}
void student_detail(void){
char name[50];
int studentID;
char course[20];
char section[2];
for(int i=0;i<5;i++){
cout<<"enter detail of student"<<i<<endl;
cout<<"name:";
cin.get(name,50);
cout<<"studentID:";
cin>>studentID;
cout<<"course:";
cin>>course;
cout<<"section:";
cin>>section;
cout<<"student1 deatil:"<<endl;
cout<<"name:"<<name<<endl;
cout<<"studentID:"<<studentID<<endl;
cout<<"course:"<<course<<endl;
cout<<"section"<<section<<endl;

}
}
