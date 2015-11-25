#include<vector>
using namespace std;

vector <int> concatenation(const vector <int>& v1, const vector<int>& v2){
   vector<int> v12;
          for(int i=0;i<v1.size();i++){
             v12[i]=v1[i];
          }
          for(int j=0;j<v2.size();j++){
             v12[j+v1.size()]=v2[j];
          }
          
   return v12;    
}
