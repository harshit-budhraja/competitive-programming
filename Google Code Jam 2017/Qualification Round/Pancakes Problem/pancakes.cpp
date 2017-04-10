#include <iostream>
#include <string>
using namespace std;



int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
    int test=1;
	while(testcases--)
	{
          string s;
          cin>>s;
          int oper;
          cin>>oper;

              int opercount=0;
          for(int i=s.length()-1;i>=oper-1;i--)
          {
                  if(s[i]=='-')
                  {
                  	opercount++;
                  	int j=0;
                  	while(j<oper)
                  	{
                          if(s[i-j]=='-')
                          {
                          	s[i-j]='+';
                          }
                          else
                          {
                          	s[i-j]='-';
                          }
                          j++;
                  	}
                  }
          }

          int flag=1;
          for(int i=0;i<oper;i++)
          {
          	if(s[i]=='-')
          	{
          		flag=0;
          		break;
          	}
          }

          if(flag)
          {
          	cout<<"Case #"<<test<<": "<<opercount<<endl;
          }
          else
          {
          	cout<<"Case #"<<test<<": "<<"IMPOSSIBLE"<<endl;
          }

          test++;
	}
	return 0;
}
