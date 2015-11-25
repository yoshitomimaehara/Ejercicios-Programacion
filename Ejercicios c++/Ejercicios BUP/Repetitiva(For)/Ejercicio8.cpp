#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    float y;
for(x=-20;x++ <40;)   
    {
 y=(-x)/(sqrt(x-20));
 if(x-20 <= 0)
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
