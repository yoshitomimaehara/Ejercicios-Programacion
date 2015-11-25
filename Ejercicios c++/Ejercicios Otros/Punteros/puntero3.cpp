#include <iostream>
using namespace std;

int main() {
 int n;
 int *e=&n;
 
 n=30;
 cout<<"n:"<<n<<"\n";
 cout<<"*e:"<<*e<<"\n";
 cout<<"dir e:"<<e<<"\n";
 e++;
 cout<<sizeof(e)<<"\n";
 cout<<"dir e++:"<<e<<"\n";
 
 system("pause");
}
