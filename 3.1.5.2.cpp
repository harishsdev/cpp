#include<iostream>
#include<vector>
using namespace std;
int main()
{
    std::vector<std::string> mystr={"hello","world"};
    for(const auto& mystr:mystr){
        std::cout<<mystr;
    }
}