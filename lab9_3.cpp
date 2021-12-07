#include <iostream>
using namespace std;
int main()
{
    int age, h;
    long long int p;
    cout<<"Enter your age: ";
    cin>>age;
    
    
    if(age<=20)
    {
        cout<<"Enter yout height: ";
        cin>>h;
        if(h<160)
        {
            cout<<"Your status = UNFRIEND";
        }
        else
        {
            if(h<175)
            {
                cout<<"Your status = FRIEND";
            }
            else
            {
                cout<<"Enter your property: ";
                cin>>p;
            if(p>69000000)
            {
                cout<<"Your status = MARRIED";
            }
            else
            {
                cout<<"Your status = ONE-NIGHT-STAND";
            }
        }
    }
    }
    else if(age<=30)
    {
        cout<<"Enter your property: ";
        cin>>p;
        
        if(p>10000000)
        {
            cout<<"Your status = BEST FRIEND";
        }
        else
        {
            cout<<"Your status = UNFRIEND";
        }
        
    }
    if(age>=30)
    {
            cout<<"Your status = UNFRIEND";
    }
}


