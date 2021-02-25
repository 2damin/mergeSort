#include<iostream>
#include "mergeSort.hpp"

// class Mergesort{
// public:
//     Mergesort(int _inputSize) : inputSize(_inputSize){
//         output.resize(inputSize);
//     };

//     void sort(std::vector<int> *input, int l, int r);

//     void merge();

// private:
// int inputSize;
// std::vector<int> output;
// };

void Mergesort::merge(std::vector<int> *input, int l , int m, int r){
    int i = l;
    int j = m+1;
    int k = l;
    while(i <= m && j <= r){
        if((*input)[i] <= (*input)[j]){
            output[k] = (*input)[i];
            ++i;
        }
        else{
            output[k] = (*input)[j];
            ++j;
        }
        ++k;
    }
    if(i > m){
        for(int c = j; c <=r; ++c){
            output[k] = (*input)[c];
            ++k;
        }
    }else{
        for(int c = i; c <=m; ++c){
            output[k] = (*input)[c];
            ++k;
        }
    }

    for(int c = l; c <= r; ++c){
        (*input)[c] = output[c];
    }
}

void Mergesort::sort(std::vector<int> *input, int l, int r){
    if(l < r)
    {
        int mid = (l + r) / 2;
        sort(input, l,mid);
        sort(input,mid+1, r);
        merge(input, l, mid, r);
    }
}