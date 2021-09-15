#include <stdio.h>
int cnt;
void f(int a) {
    int arr[3] = { 0 };
    for (int i = 0; a > 0; i++, a /= 10)arr[i] = a % 10;
    cnt += arr[0] - arr[1] == arr[1] - arr[2] ? 1 : 0;
}
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i < 100) {
            cnt++;
            continue;
        }
        if (i == 1000)break;
        f(i);
    }
    printf("%d", cnt);
}