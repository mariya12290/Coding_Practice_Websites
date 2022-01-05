#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   
   std::string s{"surendra kumar>"};
   std::vector<int>v{1,2,3,4,5,6,7};
   for(auto&i:v){
       std::cout<<i<<" ";
   }std::cout<<std::endl;
   auto vit = std::remove(v.begin(),v.end(),3);
   v.erase(vit,v.end());
   for(auto&i:v){
       std::cout<<i<<" ";
   }std::cout<<std::endl;
   auto it = std::remove(s.begin(),s.end(),'>');
   std::cout<<s<<std::endl;
   it;
   s.erase(it,s.end());
   std::cout<<s<<std::endl;
   
   std::stringstream ss{s};
   std::string s1;
   std::string s2;
   ss>>s1>>s2;
   std::cout<<"string stream "<<s1<<" "<<s2<<std::endl;
    return 0;
}
