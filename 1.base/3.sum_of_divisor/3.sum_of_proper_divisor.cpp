#include <iostream>

using namespace std;

int main(){
    int n, sum = 1; // 1�� ��� ���� �����

    cin >> n;

    cout << 1;
    
    // 1�� ��������� 2���� ����
    for(int i = 2; i < n ; i++){
        // �������� sum += i
        if((n % i) == 0){
            cout << " + " << i;
            sum += i; 
        }
    }
    cout << " = "<< sum;

    return 0;
}

// ����� ������ ã�� �� �����Ƿ� 
// '1+' '2+' '...' 'N=' 'sum' �� �ƴ�
// 1 '+2' '+3' ... '+N' '=sum'���� ���� 