#include <stdio.h>
int main (){
        int number;
        printf("nhap vao mot so nguyen ");
        scanf("%d" , &number);
        if(number % 3 == 0 && number % 5 ==0){
            printf("so chia het cho ca 3 va 5");
        } else{
            printf("so khong chia het cho ca 3 va 5");
        }
}

    

    