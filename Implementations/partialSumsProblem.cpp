//the problem gives you an array and asks for the partial sum of array elements within 
//a specific range [x:y]
#define SIZE  8
int givenArray[SIZE] = {7,-2,3,9,-11,5,1,-3};
int partialSums[SIZE];

void fillPartialSums()
{
    partialSums[0] = givenArray[0];
    for (int i{1};i<SIZE;++i)
    {
        partialSums[i] = partialSums[i-1]+givenArray[i];
    }
}
int calculatePartialSums(int x,int y)
{
    if (x == 0)
        return partialSums[y];
    return partialSums[y] - partialSums[x-1];
}