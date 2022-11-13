#include<iostream>
using namespace std;
class Student
{
    string name[100];
    int rollno[100];
    float percent[100];
    int n;
    public:
   Student() { }
   void getData(); 
   void printData(); 

};

void Student::getData()
{
     cout<<"Enter number of Students :";
    cin >> n;
    for(int i=0; i<n;i++)
    {
    cout<<"\nEnter name "<< i+1 << ":";
    cin >> name[i];
    cout<<"Enter Roll no. "<< i+1 << ":";
    cin >> rollno[i];
    cout<<"Enter Percentage "<< i+1 << ":";
    cin >> percent[i];
    }
}
void Student ::printData()
{     
    for(int i=0; i<n;i++)
    {
     cout<<" \nDetails of student no. "<< i+1;
      cout<<" \nName: "<< name[i] <<"\t Roll no.: " << rollno[i] <<"\t percent: "<< percent[i] <<"%\n" ;
    
    }
    
}
    int main()
{
    Student obj;
    obj.getData();
    obj.printData();
   return 0;
}

