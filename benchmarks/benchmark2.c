int foo(int x, int y, int flag) {
    int result;

    if (flag) {
        int a = x * y;
        int b = a + 10;
        result = b * 2;
    } else {
        int a = x * y;
        int b = a + 20;
        result = b * 2;
    }

    return result;
}