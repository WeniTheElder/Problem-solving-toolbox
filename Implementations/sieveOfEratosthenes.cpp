#define LIMIT 20
int arrayOfPrimeNumber[LIMIT];


void sieveOfEratosthenes(){
    for(int i{};i<LIMIT;++i){
        arrayOfPrimeNumber[i] = true;
    }
    for(int i = 2;i*i<LIMIT;++i){
        if(arrayOfPrimeNumber[i]){
            for(int j = i*i;j<LIMIT;j+=i){
                arrayOfPrimeNumber[j] = false;
            }
        }
    }
}