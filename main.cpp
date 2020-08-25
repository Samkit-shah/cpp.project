#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

class student

{
   public:
   char name[20],stream[30],fee[10],doc[10],col[20];
   int fno,dob,con,per;
   void put();
   void get();
   void switch_case();
  }; student s;

 void student::put()
  {

  ofstream fout;

  fout.open("database.txt",ios::out);
  cout<<"FORM NUMBER: ";
  cin>>fno;
  fout<<fno;
  cout<<"FULL NAME: ";
  cin>>name;
  fout<<name;
 cout<<"DATE OF BIRTH: ";
  cin>>dob;
  fout<<dob;
  cout<<"CONTACT NUMBER: ";
  cin>>con;
  fout<<con;
  cout<<"PERCENTAGE SCORED IN 10TH CLASS: ";
  cin>>per;
  fout<<per;
   cout<<"STREAM INTERESTED: ";
  cin>>stream;
  fout<<stream;
  cout<<"DEMAND DRAFT COLLECT?(yes/no)";
  cin>>fee;
  fout<<fee;
  cout<<"MANDATARY DOCUMENTS SUBMITTED?(yes/no) ";
  cin>>doc;
  fout<<doc;
  cout<<"FORM AND DOCUMENTS COLLECTED BY: ";
  cin>>col;
  fout<<col;




   fout.close();
   s.switch_case();
  }

  void student::get()
  {
cout<<"ENTER THE FORM NO.";
int x;

   cin>>x;
 ifstream fin;
  fin.open("database.txt", ios::in);
   if(fno==x)
    {
    cout<<"DISPLAYING DATA OF FORM NO. "<<fno<<endl;
    cout<<"FULL NAME:  "<<name<<endl;
     cout<<"STREAM INTERESTED:"<<stream<<endl;
      cout<<"DATE OF BIRTH:  "<<dob<<endl;
       cout<<"CONTACT NUMBER: "<<con<<endl;
    cout<<"10th GRADE SCORE:  "<<per<<endl;
        cout<<"DEMAND DRAFT COLLECTED :  "<<fee<<endl;
            cout<<"DOCUMENTS SUBMITTED:  "<<doc<<endl;
            cout<<"FORM AND DOCUMENTS COLLECTED BY: "<<col<<endl;
   }



  fin.close();
    s.switch_case();
   }

  void student::switch_case()
   {
    int i;
    cout<<"Enter your choice (1-Read, 2-Write, 3-exit): ";
    cin>>i;
    switch(i)
    {
    case 1:
	  s.get();
	  break;

    case 2:
	  s.put();
	  break;

    case 3:
	  exit(0);

    default:
	  cout<<"wrong choice ";
    }
    }

 int main()
    {

     s.switch_case();
    }
