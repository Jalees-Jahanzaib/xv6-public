#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(){
    for(long long int i=0; i<1000000000; i++){
        int x = 12*5 + 4*3 + 5*5;
        x += 3423/323*23/23;
        // printf(1,"3");
    }
    exit();
}