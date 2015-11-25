#include <iostream>

using namespace std;
int main()
{
int c,d,u;
long i;
for(i=100;i++ <999;)
    {
    c=i/100;
    d=(i-c*100)/10;
    u=i%10;
    if(c==d && d==u)
    {
    cout<<i<<endl;
}
}
 system("PAUSE");
    }
