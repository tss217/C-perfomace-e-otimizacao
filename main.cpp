#include <iostream>
#include <string>


// sobre carga do operador new

void* operator new(size_t bytes){
    std::cout << "A: " <<bytes<<"bytes"<<std::endl;
    return malloc(bytes);
}

int main(){
    std::cout<<"-------------"<<std::endl;

    // std::string name = "marcos aurelio maximos de alexandre";
    const char* fullName = "marcos aurelio maximos de alexandre & julio cesar de roma"; // sem alocacao de mem
    //Small string optimization - sso
    std::string name = "marcos";

    std::string names = "marcos aurelio maximos de alexandre & julio cesar de roma";
    std::string_view nameOne(names.c_str(),names.find("&")-1); // sem alocar mem
    std::string nameTwo = names.substr(names.find("&")+2);

    std::cout << nameOne <<std::endl;
    std::cout<< nameTwo << std::endl;




    

    return 0;
}