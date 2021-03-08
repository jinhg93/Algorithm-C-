#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
// ���� n�� �ԷµǸ�, ���̰� ���� 1~n-1������ ���� ��� �����°�?
// 1. check �迭�� �����, 1~n-1������ ���� ���� üũ

int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\24.jolly_jumper\\input.txt", "rt", stdin);
    int n, now, pre, pos; 

    // �� �Է� �ޱ�
    scanf("%d", &n);

    vector<int> chk(n);

    // ù��° �� �б�
    scanf("%d", &pre);

    // �ι�° ������ n-1����
    for(int i=1; i<n; i++){
        scanf("%d", &now);
        pos = abs(pre-now); 

        // �̿��� �� ���� ���̰� 1~n-1�� �����ϴ°�
        // ���� chk �迭�� �ߺ����� ������ üũ
        if(pos<n && chk[pos] == 0){
            chk[pos] = 1;
        }

        else {
            printf("NO\n");
            return 0;
        }
        pre = now; // ���� ������ �̵�
    }

    printf("YES\n");

    return 0;
}