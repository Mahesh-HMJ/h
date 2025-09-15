#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(int num, int digits){
    int temp = num;
    int sum = 0;
    while(temp>0){
        int digit = temp%10;
        sum += (int)pow(digit,digits);
        temp /= 10;
    }
    return sum==num;
}
int countDigits(int num){
    int digits = 0;
    while(num>0){
        num /= 10;
        digits++;
    }
    return digits;
}
int main(){
    int start, end;
    scanf("%d %d",&start,&end);
    int count =0;
    for(int i=start; i<=end; i++){
        int digits = countDigits(i);
        if(check(i,digits)){
            count++;
            printf("%d \n",i);
        }
    }
    printf("TOTAL: %d \n",count);
    return 0;
}