#include <iostream>
#include <string>


//unscoped enumeration
enum Fruits{
    apple, orange, mango
};

enum Fruits1{
    apple, redbull, orange
};

//scoped enumeration
enum class Fruits2{
    apple, orange,mango
};

enum class Fruits3{
    orange, apple,redbull
};

int main(){
//unscoped enumeration
//std::cout<<orange<<std::endl; //raise error bcoz of unscoped enumeration


std::cout<<Fruits2::apple<<std::endl;

    return 0;
}