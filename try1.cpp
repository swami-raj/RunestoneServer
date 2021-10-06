#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        int count=0;
        if (count0==0){
            cout<<0<<endl;
        }else if(count1==0){
            cout<<1<<endl;
        }else{for (int i = 0; i < s.length()-1; i++)
        {
            if( s[s.length()-1]=='0')
            {
                count++;
            }
            if(s[i]=='0' && s[i+1]=='1')
            {
                count++;
            }
            cout<<min(count,2)<<endl;
        }
        

        }
    }
}
