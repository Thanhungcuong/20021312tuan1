#include <iostream>

using namespace std;
bool b(int x, int y, int z)
{
    if(x>y && y>z || x<y && y<z)
        return 1;
    else
        return 0;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if (b(x,y,z) == 1)
        cout<<"true";
    else cout<<"false";
}
