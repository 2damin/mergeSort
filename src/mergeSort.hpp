#ifndef __MERGESORT_HPP__
#define __MERGESORT_HPP__

#include <vector>

class Mergesort{
public:
    Mergesort(int _inputSize) : inputSize(_inputSize){
        output.resize(inputSize);
    };

    void sort(std::vector<int> *input, int l, int r);

    void merge(std::vector<int> *input, int l , int m, int r);

    std::vector<int> get_output(){
        return output;
    }

private:
int inputSize;
std::vector<int> output;
};

#endif /*__MERGESORT_HPP__*/