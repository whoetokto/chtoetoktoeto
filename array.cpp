#include "array.h"

int max(int left,int right){
    return left > right ? left : right;
}
int min(int left,int right){
    return left < right ? left : right;
}

int min_index(int* massive,int size){
    int min{};
    for(int i{}; i < size; i++){
        if(massive[i] < massive[min]){
            min = i;
        }
    }
    return min;
}
int max_index(int* massive,int size){
    int max{};
    for(int i{}; i < size; i++){
        if(massive[i] > massive[max]){
            max = i;
        }
    }
    return max;
}