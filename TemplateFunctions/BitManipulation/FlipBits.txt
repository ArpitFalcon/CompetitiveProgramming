/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu *
******************************************/

// This will toggle the max length.
int togglebit(int n) 
{ 
    if (n == 0) 
        return 1; 
    int i = n; 
    n |= n >> 1; 
    n |= n >> 2; 
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
    return i ^ n; 
} 

// This will revert all 32 Bits of the number.
unsigned int reverseBits(unsigned int num) 
{ 
    unsigned int  NO_OF_BITS = sizeof(num) * 8; 
    unsigned int reverse_num = 0, i, temp; 
  
    for (i = 0; i < NO_OF_BITS; i++) 
    { 
        temp = (num & (1 << i)); 
        if(temp) 
            reverse_num |= (1 << ((NO_OF_BITS - 1) - i)); 
    } 
   
    return reverse_num; 
}
