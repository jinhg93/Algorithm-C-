#include <stdio.h>

int main(){
    // freopen("G:\\Git\\Algorithm-C-\\1.base\\17.auto_quiz\\input.txt", "rt", stdin);
    int nums_of_students, n, ans, sum=0;

    // �� �л��� 
    scanf("%d", &nums_of_students);

    for(int i=0; i<nums_of_students; i++){
        // �л����� �ο��� ��ȣ
        scanf("%d %d", &n, &sum);
        ans = (n*(n+1))/2;
        if(sum == ans) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}