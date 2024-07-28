// // Return true, if reversing the subarray will 
// // sort the array, else return false. 
// bool checkReverse(int arr[], int n) 
// { 
//     // Copying the array. 
//     int temp[n]; 
//     for (int i = 0; i < n; i++) 
//         temp[i] = arr[i]; 
  
//     // Sort the copied array. 
//     sort(temp, temp + n); 
  
//     // Finding the first mismatch. 
//     int front; 
//     for (front = 0; front < n; front++) 
//         if (temp[front] != arr[front]) 
//             break; 
  
//     // Finding the last mismatch. 
//     int back; 
//     for (back = n - 1; back >= 0; back--) 
//         if (temp[back] != arr[back]) 
//             break; 
  
//     // If whole array is sorted 
//     if (front >= back) 
//         return true; 
  
//     // Checking subarray is decreasing or not. 
//     do
//     { 
//         front++; 
//         if (arr[front - 1] < arr[front]) 
//             return false; 
//     } while (front != back); 
  
//     return true; 
// }





// Linear time Solution
bool sortArr(int a[], int n) 
{ 
    int x = -1; 
    int y = -1; 
  
    for (int i = 0; i < n - 1; i++) { 
        if (a[i] > a[i + 1]) { 
            if (x == -1) { 
                x = i; 
            } 
            y = i + 1; 
        } 
    } 
  
    if (x != -1) { 
        reverse(a + x, a + y + 1); 
        for (int i = 0; i < n - 1; i++) { 
            if (a[i] > a[i + 1]) { 
                return false; 
                return 0; 
            } 
        } 
    } 
  
    return true; 
} 