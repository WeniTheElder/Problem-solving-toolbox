int factors[100], exponent[100], length;

void primeFactorization(int number){
    int current_number = 2;
    while(number > 1 && current_number*current_number <= number){
        int repetitionCounter = 0;
        while(number% current_number == 0){
            number /= current_number;
            ++repetitionCounter;
        }
        if(repetitionCounter > 0){
            factors[length] = current_number;
            exponent[length] = repetitionCounter;
            length++;
        }
        ++current_number;
    }
    if(number > 1){//prime
        factors[length] = number;
        exponent[length] = 1;
        length++;
    }
}