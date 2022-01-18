#include <stdio.h>

int main(){
    int n;
    int x,sum1,sum2,total;
    int num[8];
    scanf("%d",&n);
    while(n--){
        sum1=0;
        sum2=0;
        total=0;
        for(int i=1;i<=4;i++){
        scanf("%d",&x);
        while(x>0){
            sum2+=(x%10);
            x/=10;
            num[i*2-1]=(x%10)*2;
            x/=10;
            sum2+=(x%10);
            x/=10;
            num[i*2-2]=(x%10)*2;
            x/=10;
        }
    }

    for(int j=0;j<=7;j++){
            while(num[j]>0){
                sum1+=num[j]%10;
                num[j]/=10;
            }
        }
        total=sum1+sum2;
        printf("%d\n",sum1);
        printf("%d\n",sum2);
        if(total%10==0){
            printf("Valid\n");
        }else{
            printf("Invalid\n");
        }
    }
    return 0;
}
