#include <iostream>
#include <exception>
#include <string>

class BadLength :public std::exception{
    private:
    std::string str{};
    public:
    BadLength(int i){
        str= std::to_string(i);
    }

    virtual const char* what() const throw(){
        return str.c_str();
    }
};

int main(){

    try{
        throw BadLength(10);
    }catch(BadLength &ex){
        std::cout<<ex.what()<<std::endl;
    }
}