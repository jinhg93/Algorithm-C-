#include <iostream>
#include <fstream>

using namespace std;

int main(){
   
   // vscode Ư���� ���� ��η� �����ؾ���
   // �Ƹ� �ٸ� ����� ������ �ѵ� �� ã�ƺ����ҵ�
    std::ifstream in("G:\\Git\\Algorithm-C-\\1.base\\fstream_test\\input.txt"); 
    std:string s;

    if(in.is_open()){
        in >> s;
        cout << "�Է� ���� ���ڿ� :: " << s << endl;
    } else {
        cout << "������ ã�� �� �����ϴ�!" << endl;
    }
    return 0;
}