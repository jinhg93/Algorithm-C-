#include <stdio.h>

int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\18.inter_floor_noise\\input.txt", "rt", stdin);

    int n, val, tmp, cnt=0, max=-2147000000;

    scanf("%d %d", &n, &val);

    for(int i=1; i<=n; i++){
        scanf("%d", &tmp);
        
        // ����ġ�� �ʰ��ϸ� 1�� �߰�
        if(tmp > val){
            cnt++;
        } else { //����ġ�� �ʰ����� ������ 0���� �ʱ�ȭ
            cnt = 0;
        }

        // ���� ���� �ʰ� ����ð��̶��  
        if(cnt > max){
            max = cnt;
        }
    }
    // �溸���� �ѹ��� �︮�� �ʾҴٸ�
    if(max==0) printf("-1\n");
    else printf("%d\n", max);

    return 0;
}