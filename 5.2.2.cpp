#include<iostream>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> myint={1,2,3,4,5,6};
    for(int x:myint){
        std::cout<<x;
    }

}