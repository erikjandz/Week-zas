#include <iostream>

using namespace std;

int sum(int x){
    if(x < 10){
        return x;
    }
    return x % 10 + sum(x/ 10);
}

int main(){
    cout << sum(19);
}
