//the problem gives you an array and asks for the partial sum of array elements within 
//a specific range [x:y]
#define SIZE  8
int givenArray[SIZE] = {7,-2,3,9,-11,5,1,-3};

void fillPartialSums()
{
    for (int i{1};i<SIZE;++i)
    {
        givenArray[i] += givenArray[i-1];
    }
}
int calculatePartialSums(int x,int y)
{
    if (x == 0)
        return givenArray[y];
    return givenArray[y] - givenArray[x-1];
}