#include<bits/stdc++.h>
using namespace std;

int main()
{
  
   int s,n;
   cin>>s>>n;
   int t=s;
   deque <int> fin_time;
   for(int i=0;i<n;i++)
    {
        int a,p;
        cin>>a>>p;
        if(fin_time.empty()&&t>0)
        {
          cout<<a<<endl;
          fin_time.push_back(a+p);
          t--;
        }
        else if(!fin_time.empty()&&t>0)
        {
            cout<<max(a,fin_time.back())<<endl;
            fin_time.push_back(max(a,fin_time.back())+p);
            t--;
        }
        else
        {
            while(fin_time.front()<=a&&!fin_time.empty())
            {
                fin_time.pop_front();
                t++;
            }
            if(t>0&&fin_time.empty())
            {
                cout<<a<<endl;
                 fin_time.push_back(a+p);
                 t--;
            }
            else if(t>0&&!fin_time.empty())
            {
             cout<<max(a,fin_time.back())<<endl;
             fin_time.push_back(max(a,fin_time.back())+p);
             t--;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
  
    return 0;
}