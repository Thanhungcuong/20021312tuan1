#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], tam=0,maxx=0,minn=100000000;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for(int i=0;i<n;i++)
    {
        tam+=a[i];
    }
            for(int i=0;i<n;i++)
    {
        if (a[i]>maxx) maxx=a[i];
    }
        for(int i=0;i<n;i++)
    {
        if (a[i]<minn) minn=a[i];
    }
    double tb= (double) tam/n;
    cout<<"mean: "<<tb<<endl;
    cout<<"max: "<<maxx<<endl;
    cout<<"min: "<<minn;
}
