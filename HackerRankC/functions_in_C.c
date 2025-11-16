#include <stdio.h>

int max_of_four(int a,int b,int c,int d){
    int max;
    if(a>b){
        if(a>c){
            if(a>d){
                max = a;
            }else{
                max = d;
            }

        }else{
            if(c>b){
                if(c>d){
                    max = c;
                }else{
                    max = d;
                }
            }else{
                if(b>d){
                    max = b;
                }else{
                    max = d;
                }
            }
        }
    }else{
        if(b>c){
            if(b>d){
                max = b;
            }else{
                max = d;
            }
        }else{
            max = c;
        }
    }

    return max;

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}