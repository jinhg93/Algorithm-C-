
// �ڱ� ���� �տ� �ִ� ���߿� ū �� ����? ������ �ƴ϶� �����!!!
// i ���� ũ�ų� ���� �� ī���� +1�ϱ� !!

#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\26.marathon\\input.txt","rt",stdin);

    int n, cnt;

    scanf("%d", &n);

    vector<int> score(n+1);

    for(int i=1; i<=n; i++){
        scanf("%d", &score[i]);
    }

    // 1���� �׳� ���
    printf("1 ");

    // 2����� ���
    for(int i=2; i<=n; i++){
        
        cnt=0;

        for(int j=i-1; j>=1 ; j--){
            if(score[j] >= score[i]) cnt++;
        }

        printf("%d ", cnt+1);
    }

    return 0;
}