#include <iostream>
#include <stdexcept>
#include "array.hpp"

#define test_1
//#define test_2

int main(){
    #ifdef test_1

    try{
        int firstElem;
        int diff;
        int size;
        std::cout << "Enter first element: ";
        if(!(std::cin >> firstElem)) throw ERROR("Inccorect input data");
        std::cout << "Enter diff: ";
        if(!(std::cin >> diff)) throw ERROR("Inccorect input data");
        std::cout << "Enter size: ";
        if(!(std::cin >> size)) throw ERROR("Inccorect input data");
        ARRAY tmp(firstElem,diff,size);
        std::cout << tmp << std::endl;
    } catch (ERROR& e) {std::cout << e.what() << std::endl;};
    std::cout << std::endl;
    
    #endif
    

    #ifdef test_2

    try{
        
        int size;
        std::cout << "Enter size: "; 
        std::cin >> size;
        std::vector<int> tmp_vector(size);

        std::cout << "Enter elements: " << std::endl;
        for (int i = 0; i < size; i++){
            if (!(std::cin >> tmp_vector[i])) throw ERROR("Inccorect input data");
        }
        ARRAY tmp(tmp_vector);
        
    } catch (ERROR& e) {std::cout << e.what() << std::endl;};

    #endif

    return 0;
}