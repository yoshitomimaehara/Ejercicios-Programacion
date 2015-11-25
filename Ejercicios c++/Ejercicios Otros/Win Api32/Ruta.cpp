// The Code is Borland's, I just modified it
// to make it Standard C++

#include <direct.h> // for getcwd
#include <stdlib.h>// for MAX_PATH
#include <iostream> // for cout and cin

using namespace std;

// function to return the current working directory
// this is generally the application path
void GetCurrentPath(char* buffer)
{
getcwd(buffer, _MAX_PATH);
}

int main()
{

// _MAX_PATH is the maximum length allowed for a path
char CurrentPath[_MAX_PATH];
// use the function to get the path
GetCurrentPath(CurrentPath);

// display the path for demo purposes only
char temp[_MAX_PATH];
cout << CurrentPath << endl;
cout << "Press Enter to continue";
cin.getline(temp,_MAX_PATH);
return 0;
}
