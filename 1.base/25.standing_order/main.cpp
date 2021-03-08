#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\25.standing_order\\input.txt", "rt", stdin);
    int n;

    scanf("%d", &n);

    vector<int> score(n), rank(n,1);

    for(int i =0; i<n; i++){
        scanf("%d", &score[i]);
    }

    // 2�� for���� ���� a[i]�� a[j]�� �� ��, a[i]�� ������ �� ������ a[i]�� rank�� ������Ų��
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(score[j] > score[i]) rank[i]++;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", rank[i]);
    }

    return 0;
}