#include <iostream>

using namespace std;

int main(){
    int sum=0;
    int n, m;

    // 
    cin >> n >> m;

    for(int i=0; i<=n ; i++){
        // ���� i�� m�� ������ sum�� ����
        if((i % m) == 0){
            sum += i;
        }
    }
    cout << sum;

    return 0;
}