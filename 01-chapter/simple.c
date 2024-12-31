# include<stdio.h>
int main() {
    int principal, time;
    float rate, simpleInterest;
// Input values from the user
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%d", &time);

    /*Calculate simple interest*/
    simpleInterest = (principal * rate * time) / 100;

    //Display the results
    printf("The simple interest is: %.2f\n", simpleInterest);
    
    return 0;
}