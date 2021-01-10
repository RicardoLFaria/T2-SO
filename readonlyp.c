#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int *p;
    p = (int*)main;
    p[0] = 1;
    printf(1,"%d\n", *p);
    exit();
}