#include <iostream>
#include <string>
#include <algorithm>

/** solution from set_intersection */

using namespace std;
int makeAnagram(string a, string b) {
std::sort(a.begin(),a.end());
std::sort(b.begin(),b.end());

std::string c;
c.reserve(a.size()+b.size());
auto first1 = a.begin();
auto last1 = a.end();
auto first2 = b.begin();
auto last2 = b.end();

int count {};
while(first1 != last1 && first2 != last2){
    if(*first1 <*first2 ){ count +=1; ++first1;
    }
    else if(*first2 <*first1){
        ++first2;
        count +=1;
    }else{
        std::cout<<*first1<<" "<<*first2<<std::endl;
        c.push_back(*first1);
        ++first2; ++first1;
    }
}
auto diff = ((a.size()+b.size())- (c.size()*2));
return diff;
}
int main(){

std::cout<<makeAnagram("abcfz","cde")<<std::endl;
    return 0;
}