static unsigned int g_count = 0;

unsigned int *g_count_p = &g_count;

int g_array[2] = { 1, 2 };

int e_mul(int *, int);

int e_add(int *, int);

int main() {
    int ret = e_add(g_array, 2);
    ret += e_mul(g_array, 2);
    return ret;
}
