#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std:map<std::string,int>m;
    int N{};
    std::cin>>N;
    while(N>0){
        --N;
        int i{};
        std::cin>>i;
        if(i==1){
            std::string name{};
            int marks{};
            std::cin>>name>>marks;
            auto it = m.find(name);
            if(it != m.end()){
               m[name] +=marks;
            }else{
                m.insert(std::make_pair(name,marks));
            }
           
        }else if(i==2){
            std::string name{};
            std::cin>>name;
            m.erase(name);
        }else if(i==3){
            std::string  name{};
            std::cin>>name;
            auto it = m.find(name);
            if(it != m.end()){
                std::cout<<it->second<<std::endl;
            }else{
                std::cout<<0<<std::endl;
            }
        }else{
            continue;
        }
                            
    }
    
    return 0;
}