#include <iostream>
using namespace std;
int main()
{
   cout<<"Enter aLtter:";
   char ch;
   cin>>ch;
   if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
      {
         if(ch=='a'||ch=='A')
         {
            cout<<ch<<" is a vowel."<<endl;
         }
         else if(ch=='e'||ch=='E')
         {
            cout<<ch<<" is a vowel."<<endl;
         }
         else if(ch=='i'||ch=='I')
         {
            cout<<ch<<" is a vowel."<<endl;
         }
         else if(ch=='o'||ch=='O')
         {
            cout<<ch<<" is a vowel."<<endl;
         }
         else if(ch=='u'||ch=='U')
         {
            cout<<ch<<" is a vowel."<<endl;
         }
         else
         {
            cout<<ch<<" is a consonant."<<endl;
         }
      }
   else
       cout<<ch<<" is not an alphabet."<<endl;
}