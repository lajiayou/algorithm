#include <iostream>

using namespace std;

int binarySearch(int num[],int count, int target){

    int low = 0;
    int high =count - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int flag = num[mid];
        if(flag > target){
            high = mid - 1;
        }
        else if (flag < target)
        {
            low = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main() {
    int num[7] = {0,1,2,57,78,88,99};
    int result = binarySearch(num,7, 57);
    cout << result;
    system("pause");
    return 0;
}