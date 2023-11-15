void Metropolis(){
    int numExpected = 5;
    int a, b;
    scanf("%d %d", &a, &b);
    if(a <= 1 || a > 9){
        illegal_mover();
    }
    else{
        switch (a)
        {
        case 2:
            if(b != 686){
                illegal_move();
            }
            break;
        case 3:
            if(b != 920){
                illegal_move();
            }
            break;
        case 4:
            if(b != 1394){
                illegal_move();
            }
            break;
        case 5:
            if(b != 710){
                illegal_move();
            }
            break;
        case 6:
            if(b != 684){
                illegal_move();
            }
            break;
        case 7:
            if(b != 78){
                illegal_move();
            }
            break;
        case 8:
            if(b != 928){
                illegal_move();
            }
            break;
        default:
            if(b != 78){
                illegal_move();
            }
            break;
        }
    }
    return;    
}