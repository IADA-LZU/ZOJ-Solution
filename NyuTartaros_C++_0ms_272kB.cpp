#include <iostream>

using namespace std;

int n;
int line=0;
int* s;
int i;
int a,b,c,d,e,f;
int main()
{
    while(cin>>n)
    {
        if(!n)    return 0;
        if(line)    cout<<endl;
        s=new int[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        for(a=0;a<n-5;a++)
            for(b=a+1;b<n-4;b++)
            for(c=b+1;c<n-3;c++)
            for(d=c+1;d<n-2;d++)
            for(e=d+1;e<n-1;e++)
            for(f=e+1;f<n;f++)
            cout<<s[a]<<' '<<s[b]<<' '<<s[c]<<' '<<s[d]<<' '<<s[e]<<' '<<s[f]<<endl;
        delete s;
        line=1;
    }
    return 0;
}
