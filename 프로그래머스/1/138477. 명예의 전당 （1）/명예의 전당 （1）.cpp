#include <string>
#include <vector>

using namespace std;

void insertion_sort(int *v, int size) {
    int i, j, key;
    
    for (i=1; i<size; ++i) 
    {
        key = v[i];
        for (j=i-1; j>=0; --j)
        {
            if (key > v[j])
                v[j+1] = v[j];
            else
                break;
        }
        v[j+1] = key;
    }
}


vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    if (k > score.size())
        k = score.size();
    
    int *arr = new int[k];
    int min_num = score[0];
    for (int i=0; i<k; ++i) {
        if (i > score.size()){
            delete[] arr;
            return answer;
        }
        
        if (score[i] < min_num)
            min_num = score[i];
        arr[i] = score[i]; 
        answer.push_back(min_num); 
    }
    
    insertion_sort(arr, k);
    
    for (int i=k; i<score.size(); ++i)
    {      
        if (arr[k-1] < score[i])
        {
            for (int j=0; j<k; ++j) 
            {
                if (score[i] > arr[j]) 
                {
                    for (int x=k-1; x>j; --x) 
                        arr[x] = arr[x-1];
                    arr[j] = score[i];
                    break;
                }
            }
        }
        
        answer.push_back(arr[k-1]);
    }
    
    delete[] arr;
    return answer;
}