#include <iostream>
#include <vector>

#include "mergeSort.hpp"

int main(void){

    std::cout << "Sorting" << std::endl;

    std::vector<int> input{10,7,14,9,11,19,25,22,20,29};

    int inputSize = input.size();

    auto Sort = std::make_shared<Mergesort>(inputSize);

    Sort->sort(&input,0,inputSize - 1);

    auto sort_result = Sort->get_output();

    for(auto s : input)
        std::cout << s << " ";
    return 0;
}