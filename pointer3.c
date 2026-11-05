#include <stdio.h>

int main()
{
    int a, *p;
    char b, *q;
    float c, *r;

    printf("%zu,%zu,%zu,%zu,%zu,%zu", sizeof(a), sizeof(b), sizeof(c), sizeof(p), sizeof(q), sizeof(r));

    return 0;
}
