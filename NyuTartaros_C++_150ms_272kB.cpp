#include <iostream>
#include <cstdio>

using namespace std;

double count(int a, int b)
{
    if(a%2==0)
        return a*b;
    else if(b%2==0)
        return a*b;
    else
        return a*b+0.41;
}

int main()
{
    int i,n;
    int a,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        cout<<"Scenario #"<<i<<":"<<endl;
        printf("%.2f\n\n", count(a,b));
    }
    return 0;
}
