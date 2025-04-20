int e_mul(int *a, int len) {
    int ret = 1;

    for (int i = 0; i < len; i++) {
        ret *= a[i];
    }

    return ret;
}
