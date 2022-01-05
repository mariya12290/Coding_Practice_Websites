#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N{};
    std::cin>>N;
    std::vector<int>vec;
    for(int i{};i<N;++i){
        int j{};
        std::cin>>j;
        vec.push_back(j);
    }
    std::cin>>N;
    while(N>0){
        --N;
        int i{};
        std::cin>>i;
      
        auto it = std::find(vec.begin(),vec.end(),i);
        if(it != vec.end()){
           std::cout<<"Yes "<<std::distance(vec.begin(),it)+1<<std::endl;
            
        }else{
            it = std::find_if(vec.begin(),vec.end(),[&](int j){ return j>i;});
            if(it != vec.end()){
                std::cout<<"No "<<std::distance(vec.begin(),it)+1<<std::endl;
            }
        }
    }
    return 0;
}