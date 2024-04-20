#include <stdio.h>

#define MIN_CHARGE 39.0f

int main(void)
{
    float commitsion;

    printf("Transaction size    Commission rate\n"
           "\n"
           "Under $2,500        $30+1.7%%\n"
           "$2,500–$6,250       $56+0.66%%\n"
           "$6,250–$20,000      $76+0.34%%\n"
           "$20,000–$50,000     $100+0.22%%\n"
           "$50,000–$500,000    $155+0.11%%\n"
           "Over $500,000        $255+0.09%%\n");

    int transaction_size;
    scanf("%d", &transaction_size);
    if (transaction_size < 2500)
    {
        commitsion = 30.0f + transaction_size * 0.017f;
    }
    else if (transaction_size < 6250)
    {
        commitsion = 56.0f + transaction_size * 0.0066f;
    }
    else if (transaction_size < 20000)
    {
        commitsion = 76.0f + transaction_size * 0.0034f;
    }
    else if (transaction_size < 50000)
    {
        commitsion = 100.0f + transaction_size * 0.0022f;
    }
    else if (transaction_size < 500000)
    {
        commitsion = 155.0f + transaction_size * 0.0011f;
    }
    else
    {
        commitsion = 255.0f + transaction_size * 0.0009f;
    }

    if (commitsion < 39.0f)
    {
        commitsion = 39.0f;
    }

    printf("$%.2f", commitsion);
    return 0;
}
