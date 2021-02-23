#include <iostream>
#include <cmath>
using namespace std;
bool tamgiac(int a, int b, int c)
{
    if(a<b+c && a>b-c && b<a+c && b>a-c && c<a+b && c>a-b)
        return 1;
    else
        return 0;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double s=(double) (a+b+c)/2;
    if (tamgiac(a,b,c)==1)
        cout<<sqrt(s*(s-a)*(s-b)*(s-c));
    else
        cout<<"khong phai tam giac";
}
