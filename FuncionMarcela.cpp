#include<iostream>
using namespace std;
float suma (float a,float b)
{
        float c;
        c=a+b;
        return c;
}
int main()
{
        float x,y,z;
        cout<<"Ingrese x:";cin>>x;
        cout<<"Ingrese y:"; cin>>y;
z:suma(x,y);
cout<<"El resultado es:"<<z<<endl;
return(0);
}
