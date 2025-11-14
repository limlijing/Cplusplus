#include <iostream>
using namespace std;
int main()
{
    int N,i=1;
    cout << "Enter the number of lines: ";
    cin>>N;
    while(i<=N)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j<<" ";
            j=j+1;
        }
           cout<<"\n";
           i=i+1;
    }
    return 0;
}
