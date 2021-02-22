#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    vector<int> input[10];
    getline(cin,s);
    int pos,count =7;
    string s_temp = s;

    while(count >= 0)
    {
        pos = s.find(" ");
        if(pos != string::npos)
        {
            cout<<s.substr(0,pos)<<count<<endl;
            s = s.substr(pos+1,(s.length()));
        }
        else
        {
            cout<<s.substr(pos+1,(s.length()))<<count;
        }
        count--;
    }
}