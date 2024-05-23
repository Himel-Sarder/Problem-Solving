#include <stdio.h>
 
int main() {
    int n, k, advancers = 0;
    scanf("%d %d", &n, &k);
    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    int kth_place_score = scores[k - 1];
    for (int i = 0; i < n; i++) {
        if (scores[i] >= kth_place_score && scores[i] > 0) {
            advancers++;
        } else {
            break;
        }
    }
    printf("%d\n", advancers);
    return 0;
}
