#include <stdio.h>
int main(){
    float price, vat, discount;
    printf("product price : ");
    scanf("%f", &price);
    vat = price * 7 /100;
    if(price <= 10000){
        discount = (price + vat) * 5 /100;
    }
    else{
        discount = (price + vat) * 10 /100;
    }
    printf("************************\n");
    printf("* price     = %8.2f *\n", price);
    printf("* price+vat = %8.2f *\n", price+vat);
    printf("* discount  = %8.2f *\n", discount);
    printf("* net pay   = %8.2f *\n", price+vat-discount);
    printf("************************\n");
    return 0;
}
