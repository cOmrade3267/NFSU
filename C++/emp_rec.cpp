#include<iostream>
#include<iomanip>

using namespace std;


class employee{

}emp[100];

int main(){
    int choice,rec,a=0;
    do{
        cout<<"1. Add Record(s)"<<endl;
        cout<<"2. Display All Record(s)"<<endl;
        cout<<"3. Search By Employ Number"<<endl;
        cout<<"4. Search By Employ Name"<<endl;
        cout<<"5. Update Employ Record"<<endl;
        cout<<"6. Find The Highest Paid Employee"<<endl;
        cout<<"0. Exit the application"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choise;
        switch(choice){
        case 1:
        cout<<"Enter Number of Record To Be Add : ";
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
        case 2:
            for(int i=0; i<a; i++)
        }


    }while(choise!=0)

}


