#include<iostream>
#include<iomanip>

using namespace std;

void bitwise_and(){
    int a,b,c;
    cout<<"bitwise and"<<endl;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    c = a&b;
    cout<<a<<"&"<<b<<"="<<c;

}
void bitwise_or(){
int a,b,c;
cout<<"bitwise or"<<endl;
cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    c = a|b;
    cout<<a<<"|"<<b<<"="<<c;
}
void bitwise_xor(){
int a,b,c;
cout<<"bitwise xor"<<endl;
cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    c = a^b;
    cout<<a<<"^"<<b<<"="<<c;
}
void bitwise_left(){
   int a,b,c;
   cout<<"bitwise left"<<endl;
cout<<"Enter numbers :";
    cin>>a;
cout<<"Enter numbers how many times to be shift :";
cin>>b;
c=a<<b;
cout<<a<<"<<"<<b<<"="<<c;

}
void bitwise_right(){

int a,b,c;
cout<<"bitwise right"<<endl;
cout<<"Enter numbers :";
    cin>>a;
cout<<"Enter numbers how many times to be shift :";
cin>>b;
c=a>>b;
cout<<a<<">>"<<b<<"="<<c;
}
void bitwise_complement(){
int a,b;
cout<<"bitwise complement"<<endl;
    cout<<"Enter numbers :";
    cin>>a;

b = ~a;
cout<<"~"<<a<<"="<<b;
}


int main(){
    int choise;

    do{

    cout<<"0.Exit"<<endl;
        cout<<"1.bitwise and"<<endl;
        cout<<"2.bitwise or"<<endl;
        cout<<"3.bitwise xor"<<endl;
        cout<<"4.bitwise left"<<endl;
        cout<<"5.bitwise right"<<endl;
        cout<<"6.bitwise complement"<<endl;
        cout<<"7.Clear"<<endl;
        cout<<"Enter your choice : ";
        cin>>choise;
        cout<<"===================================================================="<<endl;




        switch(choise){
    case 1:
        bitwise_and();break;
    case 2:
        bitwise_or();break;
    case 3:
        bitwise_xor();break;

    case 4:
        bitwise_left();break;
    case 5:
        bitwise_right();break;
    case 6:
        bitwise_complement();break;
    case 7:
        system("cls");break;
    case 0:
        cout<<"Thank You..."<<endl;
        }
          }while(choise!=0);

}

