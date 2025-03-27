int startIndex,endIndex;

int maxSumSubArray(int arr[],int size)
{
    //initializing the max sum as the first element in the array
    int maxSum = arr[0];
    int currentSum = 0;
    for (int i{0};i<size;++i)
    {
        currentSum += arr[i];
        if (currentSum > maxSum)
        {//we found new max sum
            maxSum = currentSum;
            //update the end of the subarray
            endIndex = i;
        }
        if (currentSum < 0)
        {//the sum became negative we start a new subarray
            currentSum = 0;
            //start the new subarray from the next element
            startIndex = i+1;
        }
    }
    return maxSum;
}