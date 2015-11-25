#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  float H,P;
  cin>>H>>P;
  if(H>=1 && P<=1000) cout<<setprecision(2)<<H/P<<endl;
  system("pause");
}
