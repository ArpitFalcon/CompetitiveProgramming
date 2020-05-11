/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu. *
******************************************/

// Return 0 for a == b, 1 for a > b, -1 for a < b

int compDouble(double a, double b){
    // If very small difference, then equal
    if(fabs(a-b) <= 1e-10)
        return 0;
    return a < b? -1 : 1;
}