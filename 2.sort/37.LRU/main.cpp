#include <stdio.h>

int cache[20];

int main(){
    freopen("G:\\Git\\Algorithm-C-\\2.sort\\37.LRU\\input.txt", "rt", stdin);

    int s, n, i, j, tmp, pos;

    scanf("%d %d",&s ,&n);
   
    for(i=0; i<n; i++){ // nȸ �ݺ�
        scanf("%d", &tmp);

        pos = -1;

        // ĳ�ø� ���� hit���� Ȯ��
        for(j=0;j<s;j++){
            if(cache[j] == tmp){ // hit�� ���
                pos = j;
            }
        }

        // miss
        if(pos==-1){
            for(j=s-1; j>=1; j--){ // ������ �̵��ϸ鼭 
                cache[j]=cache[j-1]; // �ڷ� ��ĭ�� ����, ������ �۾��� ĳ�ÿ��� �Ҹ�
            }
        } 
        // hit
        else {
            // cache[pos] �� 0���� ����� 
            for(j=pos; j>=1; j--){  // pos ������ �۾����� ��ĭ�� �ڷ� 
                cache[j] = cache[j-1];
            }
            
        }
        // ���� �ֽ� �۾��� �� ������
        cache[0] = tmp;
    }

    for(i=0; i<s; i++) 
        printf("%d ", cache[i]);

    return 0;
}