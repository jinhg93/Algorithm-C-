#include <iostream>

using namespace std;

// My answer
int main(){
    int a, b;
    int sum=0;

    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(i == b){
            cout << i << "=";
        } else
            cout << i << "+";
        sum += i;
    } cout << sum;

    return 0;
}

/*
    // b �������� ���� if�� �ʿ����
    for(int i = a; i < b; i++){
        cout << i << " + ";
        sum += i;
    }
    sum = sum+b;

    cout << b << " = " << sum;
*/
