#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    for(int i=0; i<name.length(); i++)
    {
        if(islower(name[i]))
        name[i] = toupper(name[i]);
        else if(isupper(name[i]))
        name[i] = tolower(name[i]);
    }
    cout<<name;
    return 0;
}