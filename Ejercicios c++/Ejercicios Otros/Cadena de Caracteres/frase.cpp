#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    char str[100];
    cout << "Una frase: "; cin.getline(str, 100, '\n');
    int numofch = strlen(str);
    for(int i=1; i<(40-(numofch/2)); i++)
        cout << " ";
    cout << str;
    cin.get();
    return 0;
}
