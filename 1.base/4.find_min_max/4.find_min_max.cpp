#include <iostream>
#include <fstream>

using namespace std;

int main(){

    // �׽�Ʈ�� ����� ����
    // freopen("G:\\Git\\Algorithm-C-\\1.base\\4_input.txt","rt", stdin);

    int min = 2147000000, max = -2147000000;
    int n, a;

    cin >> n;

    for(int i =1; i<= n; i++){
        cin >> a;
        if(a > max) max = a;
        if(a < min) min = a;
    }   
    cout << max - min;

    return 0;
}