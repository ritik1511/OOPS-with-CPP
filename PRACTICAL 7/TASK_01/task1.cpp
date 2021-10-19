#include<iostream>
using namespace std;
int main() 
{ 
 int ch;
 cout<<"Input your choice"<<endl;
 cin>>ch; 
 switch(ch)
 { 
  case 1: cout<<"Year is 2021"<<endl;
          break;
  case 2: cout<<"Month is October"<<endl;
          break; 
  case 3: cout<<"Date is 20"<<endl;
          break; 
  default: cout<<"Invalid Choice"<<endl;    
  } 
}           
