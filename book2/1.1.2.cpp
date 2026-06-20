#include<iostream>
#include<vector>
using namespace std;
int main()
{
   auto val=10;
   std::cout<<val<<std::endl;
   std::vector<int> vecval={1,2,3,4,5};
   for(auto& v:vecval){
    std::cout<<v<<std::endl;
   }
   std::vector<int> vec = {1, 2, 3, 4, 5};
   auto it = vec.begin(); 
   std::cout<<*it<<std::endl;
   ++it;
   std::cout<<*it<<std::endl;
   ++it;
   std::cout<<*it<<std::endl;
}