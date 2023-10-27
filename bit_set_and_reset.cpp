//PRN:22070123082
//bit set and reset 

#include<iostream>
using namespace std;
int main()
{
    int a=48,bset, breset, bl, br;
    cout<<"enter bit to be set:"<<endl;
    cin>>bset;
    cout<<"enter bit to be reset:"<<endl;
    cin>>breset;
    br=a | (1<<bset);
    bl=a & (~1>>breset);
    cout<<"set bit:"<<br<<endl;
    cout<<"reset bit:"<<bl<<endl;
    return 0;
}
/* 
OUTPUT:
enter bit to be set:
6
enter bit to be reset:
1
set bit:112
reset bit:48 
*/