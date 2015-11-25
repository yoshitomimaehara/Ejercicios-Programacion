#include<vector>
using namespace std;

double scalar_product ( const vector <double>& u, const vector<double>& v){
       double ep=0;
       if(u.size()==v.size()){                       
          for(int i=0;i<u.size();i++){
             ep+=u[i]*v[i];    
          }
       }
   return ep;    
}

