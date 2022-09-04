#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c,k;
        cin>>a>>b>>c>>k;
        int s = a+b+c;
        bool f=0;
        cout<<"Case "<<i<<": ";
        if(s%3!=0) cout<<"Fight"<<endl;
        else
        {
            int x = s/3;
            if((x>a && (x-a)%k!=0 )|| (x<a && (a-x)%k!=0)) f=1;
            if((x>b && (x-b)%k!=0 )|| (x<b && (b-x)%k!=0)) f=1;
            if((x>c && (x-c)%k!=0 )|| (x<c && (c-x)%k!=0)) f=1;

            if(f) cout<<"Fight"<<endl;
            else cout<<"Peaceful"<<endl;
        }
    }
    return 0;
}
