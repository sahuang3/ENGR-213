#include<stdio.h>
#include<stdlib.h>

struct threeNum{
    int n1,n2,n3;
};

int main(){
    
    struct threeNum num;

    FILE *fptr;
    fptr = fopen("./program.bin", "rb");

    if(fptr == NULL){
        printf("Error opening file");
        exit(1);
    }

    for(int i=0; i < 5; i++){
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d \n", num.n1, num.n2, num.n3);
    }

    fclose(fptr);

    return 0;
}