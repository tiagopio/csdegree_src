#include <stdio.h>
 
typedef struct{
    int a, b;
} rac;
 
int mdc(int x, int y){
    if (y == 0) return x;
    return mdc(y, x%y);
}
 
rac raci(int a, int b){
    rac r;
    r.a = a;
    r.b = b;
    return r;
}
 
rac less(rac r){
    return raci(-r.a, r.b);
}
 
rac sum(rac r1, rac r2){
    int mmc = (r1.b * r2.b) / mdc(r1.b, r2.b);
    int a1 = r1.a * (mmc / r1.b);
    int a2 = r2.a * (mmc / r2.b);
    return raci(a1 + a2, mmc);
}
 
rac mult(rac r1, rac r2){
    return raci(r1.a * r2.a, r1.b * r2.b);
}
 
rac div(rac r1, rac r2){
    return raci(r1.a * r2.b, r1.b * r2.a);
}
 
void red(rac * r){
    int mdc_ = mdc(r->a, r->b);
    r->a /= mdc_;
    r->b /= mdc_;
    if (r->b < 0){
        r->a *= -1;
        r->b *= -1;
    }
}
 
int main(){
    char op;
    rac r1, r2;
 
    while (scanf("%d %d %c %d %d", &r1.a, &r1.b, &op, &r2.a, &r2.b) != EOF) {
        rac res;
        switch (op){
            case '+':
                res = sum(r1, r2);
                break;
            case '-':
                res = sum(r1, less(r2));
                break;
            case '*':
                res = mult(r1, r2);
                break;
            case '/':
                res = div(r1, r2);
                break;
        }
        red(&res);
        printf("%d %d\n", res.a, res.b);
    }
    return 0;
}