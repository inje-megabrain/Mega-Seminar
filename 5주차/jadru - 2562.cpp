#include <iostream>
using namespace std;

int main() {
    int max = 0, cnt;
    for(int i = 1; i <= 9; i++){
        int a;
        cin >> a;
        if(a > max){
            max = a;
            cnt = i;
        }
    }
    cout << max << endl << cnt;
    return 0;
}
