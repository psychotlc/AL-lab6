#include "array.hpp"


ARRAY::ARRAY(): size(0), array(nullptr), diff(0), firstElem(0)  {};

ARRAY::ARRAY(int firstElem, int diff, int size): size(size), diff(diff), firstElem(firstElem){

    array = new int[size];
    for (int i = 0; i < size; i++) array[i] = firstElem  + diff * i;
}

ARRAY::ARRAY(std::vector <int> other): size(other.size()), firstElem(other[0]) {
    array = new int[size];
    if (size > 1) diff = other[1] - other[0];

    for (int i = 0; i < size; i++) {
        array[i] = other[i];
        if (i > 0){
            if (array[i] - array[i - 1] != diff){
                this->~ARRAY();
                throw ERROR("Invalid diff: its not an arifmetic progression");
            }
        }
    }
};

ARRAY::~ARRAY(){
    this->size = 0;
    delete [] array;
}

void ARRAY::print(){
    for (int i =0; i < size; i++) std::cout << array[size] << std::endl;
}

int ARRAY::sum(){
    int result = 0;
    for (int i = 0; i < size; i++) result += array[size];
    return result;
}

std::ostream& operator << (std::ostream& out,const ARRAY& array){
    for (int i = 0; i < array.size; i++){
        out << array.array[i] << " ";
    }
    return out;
};