#include <iostream>
using namespace std;
int main()
{
    float s,s1,s2;
    cout<<"ingrese el sueldo:";cin>>s;
    if(s>3000)
    {
    s1=s-(s*0.035);          
    cout<<s1<<endl;
    }
    else
    {
    s2=s-(s*0.001);    
    cout<<s2<<endl;   
    }
    system("pause");
}
