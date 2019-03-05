#include <iostream>
#include <vector>
using namespace std;

int aantal0(uint8_t byte){
    int count = 0;
    for(int i = 0; i < 8; i++){
        if(byte % 2 == 0){
            count++;
        }
        byte >>= 1;
    }
    return count;
}

int main(){
    uint8_t byte = 127;
    cout << aantal0(byte);
}
