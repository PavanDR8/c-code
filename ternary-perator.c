 // The following example writes even integers to one file and odd integers to another file:
 #include<stdio.h>
 int main()
 {
    FILE *even, *odds;
    int n = 10;
    size_t k = 0;
    even = fopen("even.txt", "w");
    odds = fopen("odds.txt", "w");
    for(k = 1; k < n + 1; k++)
    {
        k%2==0 ? fprintf(even, "\t%5d\n", k)
               : fprintf(odds, "\t%5d\n", k);
    }
    fclose(even);
    fclose(odds);
    return 0;
 }
 /*even or odd text file execute hoti hai or create hoti hai
 yani condition ke hisabse even no even text file me(even.text)write hogi or odd no sare odd.text me
 
 1.The conditional operator associates from right to left. Consider the following: 
 exp1 ? exp2 : exp3 ? exp4 : exp5
 
 2. As the association is from right to left, the above expression is evaluated as
 exp1 ? exp2 : ( exp3 ? exp4 : exp5 )
 */