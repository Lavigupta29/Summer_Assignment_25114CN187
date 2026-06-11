//WAP to Write function to check prime.

int checkPrime(int n)
{
    int i;
    
    if(n<=1){
        return 0;
    }
    for(i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    if(checkPrime(num)){
        printf("%d is a prime number", num);
    }
    else{
        printf("%d is not a prime number", num);
    }
    
    return 0;
}