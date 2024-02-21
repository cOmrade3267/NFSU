#include<iostream>
#include<iomanip>

using namespace std;

int bal;

void balance(){

cout<<"Enter Your Balance : ";
cin>>bal;
system("cls");
}

class economy{
    public:
    string sub_c,sub_d;
    string date_c,date_d;
    int cr,db;

}trans[100];

int main(){
    int choice,a=0,b=0,cred,deb;
    balance();

    do{
        cout<<"1.Credit"<<endl;
        cout<<"2.Debit"<<endl;
        cout<<"3.Credit Summary"<<endl;
        cout<<"4.Debit Summary"<<endl;
        cout<<"5.Display record"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch(choice){
    case 1:

        cout<<"Enter The Number Of Credit To Enter : ";
        cin>>cred;
        for(int i=a;i<cred+a;i++)
        {
            cout<<"Enter Date : ";
            cin>>trans[i].date_c;
            cout<<"Enter Subject : ";
            cin>>trans[i].sub_c;
            cout<<"Enter Amount To Be Credited";
            cin>>trans[i].cr;
            bal+=trans[i].cr;

        }
        a+=cred;
        break;
    case 2:
        cout<<"Enter The Number Of Debit To Enter : ";
        cin>>deb;

        for(int i=a;i<deb+a;i++)
        {
            cout<<"Enter Date : ";
            cin>>trans[i].date_d;
            cout<<"Enter Subject : ";
            cin>>trans[i].sub_d;
            cout<<"Enter Amount To Be Debited";
            cin>>trans[i].db;
            bal-=trans[i].db;

        }
        b+=cred;
        break;
    case 3:
        cout<<left<<setw(12)<<"DATE"<<setw(30)<<"CARAGORY"<<setw(10)<<"CREDITED"<<setw(75)<<bal<<endl;
        for(int i=0;i<a;i++)
        {
            cout<<left<<setw(12)<<trans[i].date_c<<setw(30)<<trans[i].sub_c<<setw(10)<<trans[i].cr<<endl;
        }
        break;
    case 4:
        cout<<left<<setw(12)<<"DATE"<<setw(30)<<"EXPENSE"<<setw(10)<<"DEBITED"<<right<<setw(75)<<bal<<endl;
        for(int i=0;i<b;i++)
        {
            cout<<left<<setw(12)<<trans[i].date_d<<setw(30)<<trans[i].sub_d<<setw(10)<<trans[i].db<<endl;
        }
        break;}



    }while(choice!=0);


}
