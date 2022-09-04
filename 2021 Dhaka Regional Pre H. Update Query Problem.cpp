#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    double l,w,d,x;
    while(cin>>l>>w)
    {
        if(l==0 && w==0) break;

        double ans = (l+w)- (l/4.0);

        cout<<fixed<<setprecision(4)<< ans<<endl;
    }
    return 0;
}
