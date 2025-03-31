#include<stdio.h>
#include<math.h>
int main(){
    int hr, min, sec, ipsec;
    printf("Enter the time in seconds: ");
    scanf("%d", &ipsec);
    hr = ipsec / 3600;
    min = (ipsec % 3600) / 60;
    sec = ipsec % 60;
    printf("Time in HH:MM:SS format is %02d:%02d:%02d\n", hr, min, sec);
    return 0;
}