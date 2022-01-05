#include <iostream>
#include <sstream>
#include <string>


int main(){

    std::stringstream ss{"123,456,789"};
    std::string word{};
    while(std::getline(ss, word,',')){
        std::cout<<word<<"  ";
    }std::cout<<std::endl;
    std::cout<<std::stoi(word)<<std::endl;
}
