int foo(int x, int y, int flag) {
    int result;

    if (flag) {
        int t = x * y;
        result = t + 10;
    } else {
        int t = x * y;
        result = t + 20;
    }

    return result;
}