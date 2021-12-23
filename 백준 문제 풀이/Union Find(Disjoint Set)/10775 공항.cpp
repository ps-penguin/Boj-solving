#include <cstdio>
using namespace std;

#define MAX 100000
int gates[MAX + 1];

int do_find(int x) {
    if (x == gates[x]) return gates[x];
    else return gates[x] = do_find(gates[x]);
}

void do_union(int a, int b) {
    int x = do_find(a);
    int y = do_find(b);

    gates[x] = y;

}
int main() {

    int g, p, gi, i, cnt = 0;

    scanf("%d", &g);
    scanf("%d", &p);

    for (i = 0; i <= g; i++) gates[i] = i;

    for (i = 0; i < p; i++) {
        scanf("%d", &gi);
        // ��ŷ �õ�
        int parent = do_find(gi);

        if (parent == 0) {
            // 0���� ���ٴ� ���� ��ŷ ������ ����Ʈ�� ���ٴ� ���� �ǹ�
            break;
        }
        else {
            // ��ŷ�Ϸ��� ����Ʈ�� �θ� ��尡 0�� �ƴ϶�� �ش� ����Ʈ�� ��ŷ�Ǿ����� ���� �׺��� ���ڰ� ���� ����Ʈ�� ��ŷ�� ������ ������ �ǹ�
            cnt++;
            do_union(parent, parent - 1);
        }
    }

    printf("%d\n", cnt);

    return 0;
}