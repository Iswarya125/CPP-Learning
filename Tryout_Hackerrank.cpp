#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    protected:
    int age;
    string name;
    
    public:    
    virtual void getdata() =0;
    virtual void putdata() = 0;
};
class Student : public Person
{
    private:
    int marks[6];
    int sum;
    
    public:
    static int cur_id;
    Student()
    {
        cur_id += 1;
        sum = 0;
    }
    void getdata() override
    {
        string s,s_temp;
        cin.ignore();
        getline(cin,s);
        int pos,count = 7;
        while(count >= 0)
        {
            pos = s.find(" ");
            if(pos != string::npos)
            {
                s_temp = s.substr(0,pos);
                s= s.substr(pos+1,s.length());
            }
            else
            {
                s_temp = s.substr(pos+1,s.length());
            }
            if(count == 7)
            {
                name = s_temp;
            }
            else if (count == 6)
            {
                age = stoi(s_temp);
            }
            else 
            {
                sum += stoi(s_temp);
            }
            count--;            
        }
        
    }
    void putdata() override
    {
        cout<<name <<" " << age <<" " << sum <<" " <<cur_id<<endl;
    }
};
int Student::cur_id = 0;

class Professor : public Person
{
    private:
    int publications;
    
    public:
    static int cur_id;
    Professor()
    {
        cur_id += 1;
    }
    void getdata() override
    {
        string s,s_temp;
        cin.ignore();
        getline(cin,s);
        int pos,count = 2;
        while(count >= 0)
        {
            pos = s.find(" ");
            if(pos != string::npos)
            {
                s_temp = s.substr(0,pos);
                s= s.substr(pos+1,s.length());
            }
            else
            {
                s_temp = s.substr(pos+1,s.length());
            }
            if(count == 2)
            {
                name = s_temp;
            }
            else if (count == 1)
            {
                age = stoi(s_temp);
            }
            else 
            {
                publications = stoi(s_temp);
            }
            count--;            
        }
        
    }
    void putdata() override
    {
        cout<< name <<" "<< age << " " << publications<<" "<<cur_id<<endl;
        
    }
};
int Professor::cur_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}