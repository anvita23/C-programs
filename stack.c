#include<stdio.h>
#include<string.h>
#define max 5
int top1=-1,top2=-1,top3=-1,top4=-1;
int push1(char t,char reverse[]){
	top1++;
	reverse[top1]=t;
}
char pop1(char reverse[]){
	char x;
	if(top1==-1){
		printf("Stack is empty");
	}
	else{
		x=reverse[top1];
		top1--;
		return x;
	}
}
int push2(char t,char reverse[]){
	top2++;
	reverse[top2]=t;
}
char pop2(char reverse[]){
	char x;
	if(top2==-1){
		printf("Stack is empty");
	}
	else{
		x=reverse[top2];
		top2--;
		return x;
	}
}
int push3(int s[],int element){
	if(top3==max-1){
		printf("Stack is full");
	}
	else{
		top3++;
		s[top3]=element;
	}
}
int pop3(int s[]){
	int x;
	if(top3==-1){
		printf("Stack is empty");
	}
	else{
		x=s[top3];
		top3--;
		return x;
	}
}
int display3(int s[]){
	int i;
	printf("Stack is:\n");
	for(i=0;i<=top3;i++){
		printf("%d ",s[i]);
	}
}
int push4(int s[],int element){
	top4++;
	s[top4]=element;
}
char pop4(int s[]){
	int x;
	if(top4==-1){
		printf("Stack is empty");
	}
	else{
		x=s[top4];
		top4--;
		return x;
	}
}
int reverse(){
	int num,ch,n1,i;
	char string[20],reverse[20],t;
	printf("Enter string to be reversed");
	scanf("%s",string);
	for(i=0;i<strlen(string);i++){
		push2(string[i],reverse);
	}
	printf("\nReverse of string is: ");
	for(i=0;i<strlen(string);i++){
		t=pop2(reverse);
		printf("%c",t);
	}
    return 0;
}
int array(){
	int arr[10],num,ch,n1;
	do{
	    printf("\nChoose one:\n1.Push an element\n2.Pop an element\n3.Display all elements\n4.Exit");
	    scanf("%d",&ch);
	    switch(ch){
	    	case 1: printf("Enter element: ");
	    	scanf("%d",&num);
			push3(arr,num);
			break;
			case 2: n1=pop3(arr);
	    	printf("Popped elements is: %d",n1);
	    	break;
	    	case 3: display3(arr);
	    	break;
		}
    }while(ch!=4);
    return 0;
}
int decimal(){
	int arr[20],n,num,i,decimal,n1;
	printf("Enter decimal no.");
	scanf("%d",&decimal);
	num=decimal;
    while(num!=0){
    	n=num%2;
    	push4(arr,n);
    	num=num/2;
	}
	printf("Binary number is: ");
	for(i=top4;i>=0;i--){
		n1=pop4(arr);
	    printf("%d",n1);
	    }
    return 0;
}
int main(){
	int choice;
	do{
	printf("\nChoose one:\n1.Implementing as an array\n2.Reverse a string\n3.Decimal to binary\n4.Check well formed parentheses\n5.Exit");
	scanf("%d",&choice);
	switch(choice){
		case 1: array();
		break;
		case 2: reverse();
		break;
		case 3: decimal();
		break;
		case 4: expression();
		break;
	}
    }while(choice!=5);
}
