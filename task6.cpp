class Solution {
public:
    void sortColors(vector<int>& nums) {
        
    }
    void quickSort(vector<int> &arr, int start, int end)
    {
        if (start < end)
        {
            int pivot;
            for(int i=0;i<arr.size();i++)
            {
                if(arr[i]==1)   pivot=i;break;
            }
            int mid = partition(arr, start + 1, end, pivot);
            quickSort(arr, start, mid - 1);
            quickSort(arr, mid + 1, end);
        }
    }
    int partition(vector<int> &arr, int start, int end, int pivot)
    {
        int left = start;
        int right = end;
        while (left <= right)
        {
            while (left <= end && arr[left] < arr[pivot] )
                left++;
            while (right >= start && arr[right] >= arr[pivot] )
                right--;
            if (left < right)
                swap(arr[left], arr[right]);
        }
        swap(arr[right], arr[pivot]);
        return right;
    }
};