#include <stdio.h>
void binary_to_roman(long int);

int main(){
    long int binary;
    printf("Enter binary number: ");
    scanf("%ld",&binary);
    binary_to_roman(binary);
    return 0;

}


void binary_to_roman( long int binaryN){
    int kat = 1;
    int total = 0;
    //int i;
    while(binaryN != 0){
        if(binaryN % 10 == 1)
            total = total + kat;
        binaryN = binaryN/10;
        kat= kat*2;
    }
    printf("decimal is %d\n",total);


    // decimal to roman starts here:
  

    int i = 0,j,k;
    
    int newTotal = total;
    int num;
    int TotaL = total;
    int newTotaL;


    // calculating how many digits are there
    while(newTotal != 0){
        i++;
        newTotal = newTotal/10;
    }
    //digit number printf("basamak sayısı %d\n",i);

    // loop from last digit to first digit
     while(i>0){
     newTotaL = TotaL;
     for(j=2;j<=i;j++)
        newTotaL= newTotaL/10;
    // printf("\nnewTotaL is %d\n",newTotaL);
     if (newTotaL< 10 )
        num = newTotaL;
     else{
     
        
        //printf("newTotaL is %d\n",newTotaL);
         num = newTotaL%10;
        }

    //printf("Num is %d\n",num);
    
    
     switch (num){
        case 0:
            break;
        case 1:
        switch (i){
        case 1:
            printf("I");
            break;
        case 2:
        printf("X");
            break;
        case 3:
        printf("C");
            break; }
            break;
        case 2:
        switch (i){
        case 1:printf("II");
            break;
        case 2:printf("XX");
            break;
        case 3:printf("CC");
            break; }
            break;
        case 3:
        switch (i){
        case 1:printf("III");
            break;
        case 2:printf("XX");
            break;
        case 3:printf("CC");
            break; }
            break;
        case 4:
        switch (i){
        case 1:printf("IV");
            break;
        case 2:printf("XL");
            break;
        case 3:printf("CD");
            break; }
            break;
        case 5:
        switch (i){
        case 1: printf("V");
            break;
        case 2: printf("L");
            break;
        case 3: printf("D");
            break; }
            break;
         case 6:
         switch (i){
        case 1: printf("VI");
            break;
        case 2: printf("LX");
            break;
        case 3: printf("DC");
            break; }
            break;
         case 7:
         switch (i){
        case 1: printf("VII");
            break;
        case 2:printf("LXX");
            break;
        case 3:printf("DCC");
            break; }
            break;
         case 8:
         switch (i){
        case 1: printf("VIII");
            break;
        case 2:printf("LXXX");
            break;
        case 3:printf("DCCC");
            break; }
            break;
         case 9:
         switch (i){
        case 1:printf("IX");
            break;
        case 2:printf("XC");
            break;
        case 3:printf("CM");
            break; }
            break;
         
         }
         i--;}
    
}
