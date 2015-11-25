#include <iostream>
using namespace std;
int main()
{
    int x,y,u,d;
    for(x=0;x++ <100;)
    {
    y=x+10;
    if(y % 2 == 0 && y>10 && y<100)
    {          
    d=y/10;
    u=y%10;
    if(d==u)
    {
    cout<< y <<endl; 
    }
    }
    }
    system("Pause");
}
