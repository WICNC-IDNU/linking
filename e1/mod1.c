extern unsigned int *g_count_p;

unsigned int e_mul_count = 0;

int e_mul(int *a, int len) {
    int ret = 1;

    for (int i = 0; i < len; i++) {
        ret *= a[i];
    }

    e_mul_count++;
    if (g_count_p) *g_count_p++;
    return ret;
}
