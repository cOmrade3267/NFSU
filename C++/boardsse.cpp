#include<iostream>
#include<iomanip>

using namespace std;

int n;
void dum(){
cout<<"Enter number of subject:";
cin>>n;
}

class subject{
    public:
    string sname;
    int theory;
    int pract;
    int total;
    string grade;
};
int main(){
    dum();
    int year;
    float sum=0.0,per;
    long int roll;
    string name,mname,fname,dob,netgr;
    subject sub[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter name of subject : ";
        cin>>sub[i].sname;
        cout<<"Enter theory marks : ";
        cin>>sub[i].theory;
        cout<<"Enter practical marks : ";
        cin>>sub[i].pract;
        cout<<"Total marks : "<<sub[i].theory+sub[i].pract<<endl;
        sub[i].total = sub[i].theory+sub[i].pract;
        if(90<sub[i].total&&sub[i].total<=100)
        {
            sub[i].grade="A1";
        }
        else
        {
            if(80<sub[i].total&&sub[i].total<=90)
            {
               sub[i].grade="A2";
            }
            else{
                if(70<sub[i].total&&sub[i].total<=80)
            {
               sub[i].grade="B1";
            }
            else{
                if(60<sub[i].total&&sub[i].total<=70)
            {
               sub[i].grade="B2";
            }
            else{
                if(50<sub[i].total&&sub[i].total<=60)
            {
               sub[i].grade="C1";
            }
            else{
                if(40<sub[i].total&&sub[i].total<=50)
            {
               sub[i].grade="C2";
            }
            else{
                if(32<sub[i].total&&sub[i].total<=40)
            {
               sub[i].grade="D";
            }
            else{
                if(20<sub[i].total&&sub[i].total<=32)
            {
               sub[i].grade="E1";
            }
            else {if(sub[i].total<=20)
            {
               sub[i].grade="E1";
            }
            }
            }
            }
            }
            }
            }
            }
        }


}
cout<<"Enter student name : ";
cin>>name;
cout<<"Enter student's roll no. : ";
cin>>roll;
cout<<"Enter student's mother name : ";
cin>>mname;
cout<<"Enter student's father name : ";
cin>>fname;
cout<<"Enter Date of Birth : ";
cin>>dob;
cout<<"Enter pass out year : ";
cin>>year;


system("cls");

cout<<right<<setw(66)<<"CENTRAL BOARD OF SECONDARY EDUCATION"<<endl;
cout<<endl;
cout<<right<<setw(56)<<"MARKS STATEMENT"<<endl;
cout<<endl;
cout<<right<<setw(66)<<"ALL INDIA SECONDARY SCHOOL OF EDUCATION "<<year<<endl;
cout<<endl;

cout<<left<<setw(30)<<"Name of Student "<<name<<endl;
cout<<left<<setw(30)<<"Roll No. "<<roll<<endl;
cout<<left<<setw(30)<<"Mother's Name "<<mname<<endl;
cout<<left<<setw(30)<<"father's Name "<<fname<<endl;
cout<<left<<setw(30)<<"Date of Birth "<<dob<<endl;
cout<<endl;

cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<left<<setw(18)<<"Sub. code"<<setw(25)<<"SUBJECT"<<setw(10)<<"THEORY"<<setw(10)<<"PRACTICAL"<<setw(10)<<"TOTAL"<<setw(10)<<"GRADE"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
for(int i=0;i<n;i++)
{
    cout<<left<<setw(18)<<i<<setw(25)<<sub[i].sname<<setw(10)<<sub[i].theory<<setw(10)<<sub[i].pract<<setw(10)<<sub[i].total<<setw(10)<<sub[i].grade<<endl;
sum+=sub[i].total;
}
per=(sum/(n*100))*100;

cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<endl;
if(90<per&&per<=100)
        {
            netgr="A1";
        }
        else
        {
            if(80<per&&per<=90)
            {
               netgr="A2";
            }
            else{
                if(70<per&&per<=80)
            {
               netgr="B1";
            }
            else{
                if(60<per&&per<=70)
            {
               netgr="B2";
            }
            else{
                if(50<per&&per<=60)
            {
               netgr="C1";
            }
            else{
                if(40<per&&per<=50)
            {
               netgr="C2";
            }
            else{
                if(32<per&&per<=40)
            {
               netgr="D";
            }
            else{
                if(20<per&&per<=32)
            {
               netgr="E1";
            }
            else {if(per<=20)
            {
               netgr="E1";
            }
            }
            }
            }
            }
            }
            }
            }
        }
cout<<left<<setw(15)<<"GRADE : "<<netgr<<right<<setw(35)<<"PERCENTAGE : "<<per<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;

}

