 // The following function uses a mask to display the bit pattern of a variable:
 #include <limits.h>
 void bit_pattern(int u)
 {
    int i, x, word;
    unsigned mask = 1;
    word = CHAR_BIT * sizeof(int);
    mask = mask << (word - 1);    
/* shift 1 to the leftmost position */
 for(i = 1; i <= word; i++)
 {
        x = (u & mask) ? 1 : 0;  /* identify the bit */
        printf("%d", x);         
/* print bit value */
        mask >>=1;
}
 }