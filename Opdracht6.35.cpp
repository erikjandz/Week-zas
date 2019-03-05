#include <iostream>
#include <vector>

using namespace std;

int index(vector<int>victor ,int size, int x){
    if(size == 0){
        return -1;
    }
    if(victor[size - 1] == x){
        return size - 1;
    }
    return index(victor, size - 1, x);
}

int main(){
    vector<int> list = {4,1,2,3,9,8,7};
    cout << index(list, list.size(), 4);
}
