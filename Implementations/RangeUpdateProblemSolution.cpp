//the problem asks you to update a range of elements in a given array 
//by adding a value to each element in the range
#define NUMBER_OF_QUERIES 3
#define SIZE 9
int arr []= {2,-7,20,13,9,29,-10,23,17};
int intermediateArr[SIZE];

void printArray(int arr[])
{
    for (int i{};i<SIZE;++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


void rangeUpdate()
{
    int x,y,val;
    for (int i{};i<NUMBER_OF_QUERIES;++i)
    {
        cin >> x >> y >> val;
        intermediateArr[x] += val;
        if (y < SIZE-1)
            intermediateArr[y+1] -= val;
    }
    //calculating partial sums
    for (int i {1};i<SIZE;++i)
    {
        intermediateArr[i] += intermediateArr[i-1];
    }
    //calculating answer
    for (int i{};i<SIZE;++i)
    {
        arr[i] += intermediateArr[i];
    }
    printArray(arr);
}