#include<iostream>
using namespace std;
int main()
{
    auto mystring=[](){
        std::cout<<"lambda code";
        std::cout<<endl;
    };
    mystring();

}