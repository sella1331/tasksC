#include<stdio.h>
#include<math.h>

long long int ipow(long long int a, unsigned int n, unsigned int * depth);

int main(){
long long int a = 3;
unsigned int n = 12;
unsigned int depth = 0;
size_t res = 0;
res = ipow(a, n, &depth);
printf("number = %zu, degth = %u", res, depth);
return 0;
}

long long int ipow(long long int a, unsigned int n, unsigned int * depth){
    if(n == 0)return 0;
if(n%2 == 0) {
    *depth +=1;
    ipow(a, n / 2, depth);
    if(a == 1)return 1;
     a = pow(a, n);
    return a;

}else{
    *depth +=1;
    ipow(a, n -1, depth);
    if(a == 1)return 1;
    a = pow(a, n);
    return a;
}
}

//printf("round = %u,  n = %u\n", *depth, n);

// while(n > 0){
//     if(n%2 == 0)n = ceil( n / 2);
//     if(n%2 !=0) n =  (n - 1) / 2;
//     *depth += 1;
// }