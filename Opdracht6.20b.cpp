#include <iostream>
#include <vector>

using namespace std;

int aantalZelfde(uint8_t x, uint8_t y){
    int count = 0;
    for(int i = 0; i < 8; i++){
        if(x % 2 == 0 && y % 2 == 0){
            count++;
        }
        if(x % 2 == 1 && y % 2 == 1){
            count++;
        }
        x >>= 1;
        y >>= 1;
    }
    return count;

}

int main(){
    uint8_t byte = 127;
    uint8_t byte2 = 1;
    cout << aantalZelfde(byte, byte2);
}
