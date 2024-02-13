#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
public:
    int empno;
    string ename;
    long salary;

}emp[10];

int main(){
    int choise,a=0;
    int rec,found;

do{
    cout<<"1. ADD RECORD"<<endl;
    cout<<"2.DISPLAY"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"3.SEARCH"<<endl;
    cin>>choise;
    switch(choise){
case 1:
    cout<<"enter number of record :";
cin>>rec;
    for(int i=a;i<a+rec;i++)
    {
        cout<<"Enter employee number :";
        cin>>emp[i].empno;
        cout<<"Enter employee name :";
        cin>>emp[i].ename;
        cout<<"Enter salary :";
        cin>>emp[i].salary;
    }
    a+=rec;
    break;
case 2:  cout<<left<<setw(25)<<"Employee number"<<setw(20)<<"Name"<<setw(1)<<right<<"Salary"<<endl;
    for(int i=0; i<a; i++)
{
    cout<<left<<setw(25)<<emp[i].empno<<setw(20)<<emp[i].ename<<setw(1)<<right<<emp[i].salary<<endl;
}
    break;
case 3:  found=0;
int empno;
cout<<"Enter employee number to find : ";
cin>>empno;
cout<<left<<setw(25)<<"Employee number"<<setw(20)<<"Name"<<setw(1)<<right<<"Salary"<<endl;
    for(int i=0; i<a; i++)
{
    if(emp[i].empno==empno)

{
    cout<<left<<setw(25)<<emp[i].empno<<setw(20)<<emp[i].ename<<setw(1)<<right<<emp[i].salary<<endl;
    found=1;
}
}
if(!found)
    cout<<"Record not found"<<endl;
    break;
case 0: cout<<"thank you"<<endl;

    }
}while(choise!=0);
}

