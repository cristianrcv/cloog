/* Generated from ../../../git/cloog/test/square+triangle-1-1-2-3.cloog by CLooG 0.14.0-72-gefe2fc2 gmp bits in 0.00s. */
extern void hash(int);

/* Useful macros. */
#define floord(n,d) (((n)<0) ? -((-(n)+(d)-1)/(d)) : (n)/(d))
#define ceild(n,d)  (((n)<0) ? -((-(n))/(d)) : ((n)+(d)-1)/(d))
#define max(x,y)    ((x) > (y) ? (x) : (y))
#define min(x,y)    ((x) < (y) ? (x) : (y))

#define S1(i,j) { hash(1); hash(i); hash(j); }
#define S2(i,j) { hash(2); hash(i); hash(j); }

void test(int M) {
    /* Original iterators. */
    int i, j;
    for (j=1; j<=M; j++) {
        S1(1,j) ;
    }
    for (i=2; i<=M-1; i++) {
        S1(i,1) ;
        for (j=2; j<=i; j++) {
            S1(i,j) ;
            S2(i,j) ;
        }
        for (j=i+1; j<=M; j++) {
            S1(i,j) ;
        }
    }
    if (M >= 2) {
        S1(M,1) ;
        for (j=2; j<=M; j++) {
            S1(M,j) ;
            S2(M,j) ;
        }
    }
}
