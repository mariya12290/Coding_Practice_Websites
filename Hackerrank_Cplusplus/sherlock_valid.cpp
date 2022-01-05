#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <cstring>

using namespace std;
string isValid(string s) {
    std::sort(s.begin(),s.end());
    std::map<char, int>m;
    auto first= s.begin();
    auto last = s.end();
    while(first != last){
        auto first1 = first;
        if(*first==*(++first)){
            m[*first1] +=1;
        }else{
            m[*first1] +=1;
        }
    }
  
  std::vector<int>v;
  v.reserve(26);
  for(auto&i:m){
      v.push_back(i.second);
  }
std::sort(v.begin(),v.end());

auto l{0};
for(auto i{0};i<v.size();++i){
    if(v[i]==0){
        l++;
    }
}
int count{};
if(v[l]==1){
    l++;
    count +=1;
}
std::cout<<l<<" "<<count<<std::endl;
 for(int i=l+1;i<v.size();i++)
        {
        if(v[i]!=v[l])
            {
            count++;
        }
    }
    if(count>1)
       return "NO";
    else
        return "YES";
    
}
int main(){
    std::string s{""};
    if(std::all_of(s.begin(),s.end(),[](auto i){ return i==' ';})){
        std::cout<<" string s has only space"<<std::endl;
    }else{
        std::cout<<"no"<<std::endl;
    }

    std::cout<<isValid()<<std::endl;
}