#include<iostream>
#include<iomanip>
using namespace std;
int bigball=0;
class players{
public:
    string playername;
    int run,ball,fr,sx,wk;
    }tn[11];

int main(){
    cout<<fixed<<setprecision(2);
    int score=0,ext,wi=0;

for(int i=0; i<11; i++)
{
    cout<<"Enter player "<<i+1<<endl ;
    cout<<"Name : ";
    cin>>tn[i].playername;
    cout<<"Run : ";
    cin>>tn[i].run;
    cout<<"Ball : ";
    cin>>tn[i].ball;
    bigball+=tn[i].ball;
    cout<<"Fours : ";
    cin>>tn[i].fr;
    cout<<"Six : " ;
    cin>>tn[i].sx;
    label:
    cout<<"for wicket, 1 for yes 0 for no :";
    cin>>tn[i].wk;
    if(tn[i].wk==0||tn[i].wk==1)
        {
        1;
        }
    else
        {goto label;}
    if(tn[i].wk==1)
    {
        wi+=1;
    }



}
cout<<"Enter extras run :";
cin>>ext;
for(int i=0;i<11;i++)
{
    score+=tn[i].run;
}
score+=ext;
system("cls");
cout<<left<<setw(20)<<"India 2nd inn "<<left<<setw(20)<<" "<<score<<"/"<<wi<<setw(10)<<" "<<"<"<<bigball/6<<"."<<bigball%6<<">"<<endl;
cout<<"=================================================================="<<endl;
cout<<left<<setw(20)<<"Batter"<<setw(10)<<"Run"<<setw(10)<<"Ball"<<setw(10)<<"4 "<<setw(10)<<"6 "<<setw(10)<<"SR"<<endl;
cout<<"------------------------------------------------------------------"<<endl;
for(int i=0;i<11;i++)
{
    cout<<left<<setw(20)<<tn[i].playername<<setw(10)<<tn[i].run<<setw(10)<<tn[i].ball<<setw(10)<<tn[i].fr<<setw(10)<<tn[i].sx<<setw(10)<<((float)tn[i].run/tn[i].ball)*100<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
}
cout<<"Made by Soham Nilesh Khardikar"<<endl;
return 0;

}
