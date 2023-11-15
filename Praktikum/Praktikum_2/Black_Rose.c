void Black_Rose(){
    int numExpected = 240;
    int i = 0;
    int found = 1;
    int numbers[6] = read_six_numbers(); 
    while(i != 6 && found){
        if(numbers[i] != numExpected){
            found = 0;
        }
        if(i != 4){
            if(i % 2 == 0){
                numExpected = (numExpected/2) + 30;
            } else{
                numExpected = (numExpected/2) - 15;
            }
        }
        i++;
    }
    if(found == 0){
        illegal_move();
    }
    return;
}