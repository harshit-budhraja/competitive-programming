#include <stdio.h>
        #include <stdlib.h>
        #include <limits.h>
        #include <math.h>
        #define MOD 1000000007
         
        #define PARENT(i) (i>>1)
        #define LEFT(i) (i*2)
        #define RIGHT(i) (i*2+1)
         
        typedef struct element {
                double logval;
                int index;
        } element;
         
        double smallesti(element *dq, int *di, int *count, int *index){
                double ret = dq[1].logval;
                *index = dq[1].index;
         
                return ret;
        }
         
        void removei(element *dq, int *di, int *count, int index){
                int i = di[index];
                dq[i].logval = dq[*count].logval;
                dq[i].index = dq[*count].index;
                di[dq[i].index] = i;
                *count = *count - 1;
         
                while (i <= PARENT(*count) && (dq[i].logval > dq[LEFT(i)].logval || ((RIGHT(i) <= *count) && (dq[i].logval > dq[RIGHT(i)].logval)))){
                        int ni;
                        if ((dq[LEFT(i)].logval > dq[RIGHT(i)].logval) && (RIGHT(i) <= *count)){
                                ni = RIGHT(i);
                        }else{
                                ni = LEFT(i);
                        }
                        double tmpd = dq[ni].logval;
                        int tmpi = dq[ni].index;
                        dq[ni].logval = dq[i].logval;
                        dq[ni].index = dq[i].index;
                        di[dq[ni].index] = ni;
                        dq[i].logval = tmpd;
                        dq[i].index = tmpi;
                        di[dq[i].index] = i;
                        i = ni;
                }
        }
        void add(element *dq, int *di, int *count, double logval, int index){
                *count = *count + 1;
                dq[*count].logval = logval;
                dq[*count].index = index;
                di[index] = *count;
         
                int i = *count;
                while (i > 1 && dq[i].logval < dq[PARENT(i)].logval ){
                        int ni = PARENT(i);
                        double tmpd = dq[ni].logval;
                        int tmpi = dq[ni].index;
                        dq[ni].logval = dq[i].logval;
                        dq[ni].index = dq[i].index;
                        di[dq[ni].index] = ni;
                        dq[i].logval = tmpd;
                        dq[i].index = tmpi;
                        di[dq[i].index] = i;
                        i = ni;
                }
        }
         
        void printi(element *dq, int *di, int count, int max){
                int i;
                printf("%d Elements\n", count);
                for ( i = 1; i <= count; i++ ){
                        printf("%d, %f, %d\n", i, dq[i].logval, dq[i].index);
                }
                if ( di ){
                printf("Index\n");
                for ( i = 0; i < max; i++ ){
                        printf("%d %d\n", i, di[i]);
                }
                }
        }
         
        int main(int argc, char *argv[]){
                int i, stop, N, K;
                char c;
                scanf("%d %d\n", &N, &K);
                unsigned int *A = calloc(N, sizeof(unsigned int));
                for ( i = 0; i < N; i++ ){
                        A[i] = stop = 0;
                        do {
                                c = getchar_unlocked();
                                /*switch (c){
                                case '0': case '1': case '2': case '3': case '4':
                                case '5': case '6': case '7': case '8': case '9':
                                        A[i] = (A[i] * 10) + c - '0';
                                        break;
                                case ' ': case '.': case '\n':
                                        stop = 1;
                                        break;
                                }*/
                                if(c == ' ' || c == '.' || c == '\n')
                                {
                                	stop = 1;
                                }
                                else if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
                                {
                                	A[i] = (A[i] * 10) + c - '0';
                                }
                        }while(!stop);
                }
         
                element *Dq = calloc(K+2, sizeof(element));
                int *Di = calloc(N, sizeof(int));
                int *D = calloc(N, sizeof(int));
                int index, count = 0;
                double smallest;
                D[0] = A[0] % MOD;
                add(Dq, Di, &count, log(A[0]), 0);
                for ( i = 1; i < N; i++ ){
                        smallest = smallesti(Dq, Di, &count, &index);
                        add(Dq, Di, &count, smallest + log(A[i]), i);
                        if ((count >= K) && (i-K >= 0)){
                                removei(Dq, Di, &count, i-K);
                        }
                        D[i] = ((unsigned long long)D[index] * A[i]) % MOD;
                }
                printf("%u\n", D[N-1]);
                return 0;
                }   