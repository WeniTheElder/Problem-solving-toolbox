
//this problem is based on pigeonhole principle
#define MAX_NUMBER 10000
int frequencyArray[MAX_NUMBER];

void printOnes(int num)
{
    for (int i{};i<num;++i)
    {
        cout << 1;
    }
}
void printZeros(int num)
{
    for (int i{};i<num;++i)
    {
        cout << 0;
    }
}

void findNumber(int number)
{
    int currentRemainder = 0;
    for (int i = 1;i<=number;++i)
    {
        //calculating the remainder of every generated number
        currentRemainder = (currentRemainder*10+1)%number;
        if (currentRemainder == 0)
        {//found an answer
            printOnes(i);
            return;
        }
        if (frequencyArray[currentRemainder] > 0)
        {//there's a number have the same remainder as the current one
            printOnes(i-frequencyArray[currentRemainder]);
            printZeros(frequencyArray[currentRemainder]);
            return;
        }
        //adding number of 1's for the number with remainder = current remainder
        frequencyArray[currentRemainder] = i;
    }
}