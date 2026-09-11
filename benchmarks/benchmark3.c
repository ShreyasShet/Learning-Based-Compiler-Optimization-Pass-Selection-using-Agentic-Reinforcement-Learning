int foo(int x, int y, int flag) {
    int result;

    if (flag) {
        int a = x * y;
        result = a + a;
    } else {
        int b = x * 2;
        result = b * y;
    }

    return result;
}