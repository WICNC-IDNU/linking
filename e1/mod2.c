extern unsigned int *g_count_p;

unsigned int e_add_count = 0;

int e_add(int *a, int len) {
    int ret = 0;

    for (int i = 0; i < len; i++) {
        ret += a[i];
    }

    e_add_count++;
    if (g_count_p) *g_count_p++;
    return ret;
}
