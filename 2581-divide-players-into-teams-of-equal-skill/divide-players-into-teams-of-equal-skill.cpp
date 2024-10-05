class Solution {
public:
    int findPartition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];  // Choosing the first element as the pivot
        int i = low, j = high;

        while (i < j) {
            while (arr[i] <= pivot && i < high) {
                i++;
            }
            while (arr[j] > pivot && j > low) {
                j--;
            }
            if (i < j) {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);

        return j;  // Return the partition index
    }

    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int partition = findPartition(arr, low, high);
            quickSort(arr, low, partition - 1);  // Left part
            quickSort(arr, partition + 1, high); // Right part
        }
    }

    long long dividePlayers(vector<int>& skill) {

        int i = 0, j = skill.size()-1;
        quickSort(skill, 0, j);

        int k= accumulate(skill.begin(),skill.end(),0);
        k = k/(skill.size()/2);
        long long ans=0;
        while(i<j)
        {
            if(skill[i]+skill[j]!=k)return -1;
            else
            {
                ans+=skill[i]*skill[j];
            }
            i++ , j--;
        }
        return ans;
    }
};