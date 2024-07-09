#include<stdio.h>
 void main(){
    int num;
    printf("Enter number to check number is Armstrong or not\n");
    scanf("%d",&num);
    // int originalNumber=num;
     int len=0;
     int num1=num;
     while(num1!=0){
         num1 =num1/10;
         len = len+1;
    
     }
    //  printf("%d\n",len);
     int sum=0;
     int num2=num;
     while(num2!=0){
          int remender=num2%10;
          int mul=1;
                for(int i=1;i<=len;i++){
                      mul=mul*remender;
                  }
                    sum=sum+mul;
                  num2= num2/10;
     }
     if(sum==num){
         printf("Number is Armstrong");
     }
     else{
         printf("Number is not armstrong");
     }
 }