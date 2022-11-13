#include<iostream>
using namespace std;
class Record
{
    string name[100];
    int age[100];
    int n;
    public:
   Record() { }
   void getData(); 
   void findEldest(); 

};

void Record::getData()
{
     cout<<"Enter number of people :";
    cin >> n;
    for(int i=0; i<n;i++)
    {
    cout<<"Enter name "<< i+1 << ":";
    cin >> name[i];
    cout<<"Enter age "<< i+1 << ":";
    cin >> age[i];
    }
}
void Record ::findEldest()
{
    int max=0 ;
    for(int i = 1;i < n; ++i)
    {
              if(age[i] > age[max])
           max=i;
    }
     cout<<"The eldest person is " << name[max] << "  with an age of "<< age[max] << " years.";
    
}
    int main()
{
    Record obj;
    obj.getData();
    obj.findEldest();
   return 0;
}
