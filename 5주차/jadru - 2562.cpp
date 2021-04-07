#include <iostream>
using namespace std;

int main() {
    int max = 0, cnt; // 인수 선언
    for(int i = 1; i <= 9; i++){ // 반복문 시작
        int a;
        cin >> a;
        if(a > max){ // 큰 값이면
            max = a;
            cnt = i;
        }
    }
    cout << max << endl << cnt;
    return 0;
}
