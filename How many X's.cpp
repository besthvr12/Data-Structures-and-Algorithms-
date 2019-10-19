#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test ;
  cin >> test;
  while(test--)
  {
    int x,l,u;
    cin >> x >> l >> u;
    int count = 0;
    for(int i=l+1;i<u;i++)
    {
      string s = to_string(i);
      for(int j=0;j<s.length();j++)
      {
        if(s[j]-'0' == x)
        {
          count++;
        }
      }
    }
    cout << count << endl;

  }
}
