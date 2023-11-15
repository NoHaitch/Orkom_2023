int func4(int n) {
    // fibonachi rekursif
    if (n <= 1) {
        return n;
    } else {
        return func4(n - 1) + func4(n - 2);
    }
}

int Sky_Street(){
    int numExpected = 14;
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == numExpected){
        if(b != func4(numExpected)){
            illegal_move();
        }
    }
    else{
        illegal_move();
    }
    return;
}