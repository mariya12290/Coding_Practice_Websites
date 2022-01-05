#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 int val1{};
 int val2{};
 std::cin>>val1>>val2;
 std::vector<std::string>v1;
 std::vector<std::string>v2;
 v2.reserve(val2);
 v1.reserve(val1);
 
 std::vector<std::string>tag;
 tag.reserve(val1);
 std:string s{};
 int val = val1;
 std::cin.ignore();
 while(val>0){
     std::getline(std::cin,s);
     v1.push_back(s);
     --val;
     
 }
 val = val2;
 while(val>0){
    std::getline(std::cin,s);
     v2.push_back(s);
     --val;
     
 }

 //remove the
 int n{}; 
 std::map<std::string,std::string>m{};
//  for(auto&i:v1){
//      std::cout<<i<<std::endl;
//  }

 while(n < val1){
    s = v1[n];
    
    s.erase(std::remove(s.begin(),s.end(),'"'),s.end());
    s.erase(std::remove(s.begin(),s.end(),'>'),s.end());
 
      if(s.substr(0,2)=="</"){
          
          n +=1;
          if (n==val1){
           

            break;
        }
          continue;
      }else{
            s.erase(std::remove(s.begin(),s.end(),'<'),s.end());
          std::stringstream ss{s};
          std::string s1;
          std::string s2;
          std::string s3;
          char ch;
          ss>>s1>>s2>>ch>>s3;// s1 is tag, s2 is attribute name s3 is value
        
          if(tag.size()){
              tag.push_back((*tag.rbegin())+"."+s1);
                      
          } else{
              tag.push_back(s1);
              
          }
          m[(*tag.rbegin())+"~"+s2] = s3;
           
          n +=1;
        if (n==val1){
         
            break;
        }
          
      }
 }
 
      for(auto i{0};i<val2;++i){
          if(m.find(v2[i])!= m.end()){
              std::cout<<m[v2[i]]<<std::endl;
          }else{
              std::cout<<"Not Found!"<<std::endl;
          }
      }
     
 
 
    return 0;
}
