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
    int val1; int val2;
    std::cin>>val1>>val2;
   
   
    std::vector<std::string>v1;
    std::vector<std::string>v2;
    v2.reserve(val2);
    v1.reserve(val1);
   std::string s;
    while(val1>0){
       
        std::getline(std::cin,s,'\n');
        if (s.empty()){
            continue;
            val1-=1;
        }
        v1.push_back(s);
         val1 -=1;
    }  
     v1.resize(2);
    while(val2>0){
        std::getline(std::cin,s,'\n');
        v2.push_back(s);
        --val2;
    }
    for(auto& s1:v2){
        auto pos = s1.size();
        auto pos1 = s1.find('~');
        if(pos1 != std::string::npos){
          pos = pos1-4;
          auto s2 = s1.substr(pos,4);
          auto s3 = s1.substr(pos1+1);
          for(auto&s4:v1){
              if(s4.find(s2)!=std::string::npos){
                  auto len = s3.size();
                  len +=4;
                  pos1 = s4.find(s3);
                  if(pos1!=std::string::npos){
                      pos1 +=len;
                      s2 =s4.substr(pos1);
                      std::stringstream ss{s2};
                      while(std::getline(ss,s2,'"')){
                          std::cout<<s2<<std::endl;
                          break;
                      }
                      
                  }else{
                      std::cout<<"Not Found!"<<std::endl;
                  }
              }else{
                  continue;
              }
          }
        }
        
    }
   
    return 0;
}
