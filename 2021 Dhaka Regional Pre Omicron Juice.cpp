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
        int a,b,c;
        cin>>a>>b>>c;
        int s = a+b+c;
        cout<<"Case "<<i<<": ";
        if(s%3==0) cout<<"Peaceful"<<endl;
        else cout<<"Fight"<<endl;
    }
    return 0;
}
