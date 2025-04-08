#define SIZE 20
int arr[SIZE] = {3, 5, 2, 8, 1, 4, 6, 9, 7, 2, 10, 3, 1, 5, 2, 4, 6, 3, 8, 7};
int freqArray[SIZE];
int ansLeft,ansRight,maxSize;

void resetFreqArray()
{
    for (auto &i:freqArray)
    {
        i = 0;
    }
}


void maxConsecutiveSubArray()
{
    for (int i = 0;i<SIZE-2;++i)
    {
        int min = arr[i];
        int max = arr[i];
        resetFreqArray();
        freqArray[arr[i]]++;
        for (int j = i+1;j <SIZE -1;++j)
        {
            freqArray[arr[j]]++;
            if (freqArray[arr[j]] > 1) break; //make sure the elements are distinct
            if (arr[j] > max) max = arr[j];   //update max element
            if (arr[j] < min) min = arr[j];   //update min element
            if (max - min == j-i && j-i > maxSize-1) //check if current subarray is consecutive and bigger than ans
            {
                maxSize = j-i+1;
                ansRight = j;
                ansLeft = i;
            }
        }
    }
}