#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the temprature: ";
    std::getline(std::cin, s);
    cout<<endl;
    string temp="";
    // cout<<s;
    for(auto it:s)
    {
        if(it>='0'&&it<='9')
        {
            temp+=it;
        }
    }
    double in=stod(temp);
    if(s[s.size()-1]=='s')//input in celsius
    {
        double f=((1.00*9*in)/5)+32;
        double k=in+273*1.00;
        cout<<"Fahrenheit value is : "<<f<<endl;
        cout<<"Kelvin value is : "<<k<<endl;
    }
    if(s[s.size()-1]=='t')//input in fahrenheit
    {
        double c=((1.00*in-32)*5)/9;
        double k=in+273*1.00;
        cout<<"Celsius value is : "<<c<<endl;
        cout<<"Kelvin value is : "<<k<<endl;
    }
    if(s[s.size()-1]=='n')//input in kelvin
    {
        in-=273;
        double f=((1.00*9*in)/5)+32;
        double k=in+273*1.00;
        cout<<"Fahrenheit value is : "<<f<<endl;
        cout<<"Celsius value is : "<<k<<endl;
    }
    return 0;
}