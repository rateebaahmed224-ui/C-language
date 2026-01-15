#include<stdio.h>//cheack a palindrome
int main(){
	int org,num=1221,rev=0,digit;
	org=num;
	while( num!=0){
		digit= num%10;
		rev = rev * 10 + digit;
		num = num/10;
	}
	 if (org == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}