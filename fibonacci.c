#include<stdio.h>
int main(){
    int i,n,a,b,c;
    printf("Enter the no of terms to be printed");
    scanf("%d",&n);
    a=0;
    b=1;
    if(n==0){
        printf("\n");
    }
    if(n==1){
        printf("%d\n",a);
    }
    if(n==2){
        printf("%d\n",b);
    }
    else
    for(i=1;i<=n;i++){
            printf("%d\n",a);
c=a+b;
            a=b;
            b=c;

    }
return 0;

}
