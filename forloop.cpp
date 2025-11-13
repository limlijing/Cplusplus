#include <iostream>
#include <cstring>
using namespace std;
int main()
{
      for(int i=1;i<=8;i++)
      {
         string output(i,'+');
         cout<<output<<endl;
      }
      for(int i=8;i>=1;i--)
      {
         string output(i,+'+');
         cout<<output<<endl;
      }
      return 0;
}
  