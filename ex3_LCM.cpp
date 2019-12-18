#include<iostream>
using namespace std;
int main()
{
    int classs, i=0;
    cin >> classs;
    while(i<classs)
    {
        int num, n, r, g=0, s=0, arr[100];
        cin>>num;
        while(g<num)
        {
            cin>>n;
            arr[g]=n;
            g++;
        }
        for(int t=1;;t++){
            for(int i=0; i<num; i++)
            {
                if(t%arr[i]==0)
                {
                    s++;
                }
                else
                {
                    continue;
                }
            }
            if(s==num)
            {
                r=t;
                break;
            }
            s=0;
        }
        cout<<r<<endl;
        i++;
    }
return 0;
}
