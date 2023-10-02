#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    int order;
    char name[101];
} Member;


int compareAge(const void* a, const void* b) {
    return ((Member*)a)->age - ((Member*)b)->age;
}

int main() {
    int n;
    scanf("%d", &n);

    Member* members = (Member*)malloc(sizeof(Member) * n);


    for (int i = 0; i < n; i++) {
        scanf("%d %s", &members[i].age, members[i].name);
        members[i].order = i;
    }


    qsort(members, n, sizeof(Member), compareAge);


    for (int i = 0; i < n; i++) {
        printf("%d %s\n", members[i].age, members[i].name);
    }

    free(members);

    return 0;
}
