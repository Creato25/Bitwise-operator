//PRN:22070123082
//bitwise operator

#include<iostream>
using namespace std;
int main()
{
    int a=13,b=67,bl, br, set ,reset ;
    cout<<"a or b:"<<(a|1)<<endl;
    cout<<"a and b:"<<(a & 11)<<endl;
    bl=b<<3;
    cout<<"l shift:"<<bl<<endl;
    br=b>>4;
    cout<<"r shift:"<<br<<endl;
    
}
/*
a or b:13
a and b:9
l shift:536
r shift:4
*/