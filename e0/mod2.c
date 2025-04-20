int e_add(int *a, int len) {
    int ret = 0;

    for (int i = 0; i < len; i++) {
        ret += a[i];
    }

    return ret;
}
