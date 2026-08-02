# include <stdio.h>

void numrev (int x)
{
    int rev = 0; 
    int ret = 0;
    
    if(x<0)
    {
        printf("unexpected num entered, auto mixed for you:\n-");
        x = -x;
    }

    while(x>0)
    {
        rev = x % 10;
        x /= 10;
        ret = ret*10 + rev;
        // printf("%d ",rev);
        
    }
    printf("%d",ret);
    
}

int main(void)
{
    int x = 0;
    printf("Please enter the willing num:");
    scanf("%d",&x);
    printf("U've entered %d \n",x);

    numrev(x);
    
    return 0;
}

