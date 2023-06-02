#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

class ARRAY{
    friend std::ostream& operator << (std::ostream& out,const ARRAY& array);
private:
    int firstElem;
    int diff; 
    int size;
    int* array;

public:
    ARRAY();
    ARRAY(int firstElem, int diff, int size);
    ARRAY(std::vector <int> other);
    int sum();
    void print();
    ~ARRAY();

    
};

std::ostream& operator << (std::ostream& out,const ARRAY& array);

class ERROR : public std::invalid_argument, private ARRAY{
public:
    ERROR(std::string message) : std::invalid_argument(message){
        
    };
};