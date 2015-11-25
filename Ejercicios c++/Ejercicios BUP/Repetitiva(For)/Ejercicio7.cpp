#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    float y;
for(x=-20;x++ <30;)   
    {
 y=sqrt(x+10);
 if(x+10 < 0)
 {
 cout<<"no existe en R"<<endl;
}
else
{
 cout<<y<<endl;        
}
            }
system("pause");            
    }
