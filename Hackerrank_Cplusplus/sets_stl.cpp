#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    std::set<int>s;
    int N{};
    std::cin>>N;
    while(N>0){
        --N;
        int q{};
        int elem{};
        std::cin>>q;
        switch(q)
        {case 1:
            std::cin>>elem;
            s.insert((elem));
            break;
        case 2:
            std::cin>>elem;
            s.erase(elem);
            break;
        case 3:
            std::cin>>elem;
            auto it = s.find(elem);
            if(it != s.end()){
                std::cout<<"Yes"<<std::endl;
            }else{
                std::cout<<"No"<<std::endl;
            }
            break;
      
        }
    }  
    return 0;
}