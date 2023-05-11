#include<iostream>
using namespace std;
int main()
{
        int v1[2],v2[2],r[2];
        cout<<"ingrese v1:";
        cin>>v1[0]>>v1[1];
        cout<<"ingrese v2:";
        cin>>v2[0]>>v2[1];
        r[0]=v1[0]+v2[0];
        r[0]=v1[1]+v2[1];
        cout<<"rx:"<<r[0]<<"ry:"<<r[1]<<endl;
        return(0);
}