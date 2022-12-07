#include <stdio.h>
#include <time.h>
#include <string.h>
int main(){
    int t;
    int totalSpend, spendDay;
    float avgSpend;
    int   dayN;
    
    t = time(NULL) % 31556926; /* number of seconds elapsed in a year */
    dayN = 1 + t/86400;
    // +1 olmasının nedeni içinde olduğumuz günü de hesaplasın diye
    
    FILE * fpointer5 = fopen("spendTotal.txt", "r");
    fscanf(fpointer5,"%d",&totalSpend);
    fclose(fpointer5);

    printf("Total spend: %d",totalSpend);printf("\n");
    printf("Enter your today spend : ");
    scanf("%d",&spendDay);
    printf("\n");
    totalSpend = totalSpend + spendDay; 
    //AI came ankara at 260. day of year
   // printf("dayN = %d\n",dayN);
    printf("2. Anlaraya geli kaç gün oldu: %d\n",dayN-260);
    
    avgSpend = totalSpend / (dayN* 1.0);

    FILE * fpointer2 = fopen("spendTotal.txt", "w");
    fprintf(fpointer2,"%d", totalSpend);
    fclose(fpointer2);

    printf("Your total spend%d\n", totalSpend);
    printf("Your average spend is  %.2f", avgSpend);

    return 0;

}