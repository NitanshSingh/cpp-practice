/*

TIME COMPLEXITY NOTES

1. What is it?
   TC!= time taken.
   ---> rate at which the time taken incereases with respect to input size.

2. O(1) - Constant Time
   Example: int arr[] = {10, 20, 30, 40, 50};
    int x = arr[2];  // always instant, no loop
    cout << x;
   Why constant: beacuse there is no loop only a fixed number.

3. O(n) - Linear  Time
   Example: int arr[] = {10, 20, 30, 40, 50};  (hint: single loop)
    for(int i = 0; i < 5; i++){
    cout << arr[i];   // runs once per element
    }                   
   Why linear:  because of  single loop runs only n times for n elements.

4. O(n²) - Quadratic Time
   Example: int arr[] = {10, 20, 30, 40, 50};  (hint: single loop)
    for(int i = 0; i < 5; i++){
        for(int j=1 ; j < 5 ; j++)
    cout << arr[i];   // runs twice for N*N elements.
    }                
   Why quadratic: because of  nested loop runs for N*N elements.

5. O(log n) - logarithimic Time
    Example: int low=0;
             int high = n-1;
             int result = -1 ;
             while ( low <= high ){
             int mid = ( low + high ) / 2;
             if arr[mid] == target{
             result = mid;
             break;
             }
             else if ( target > arr[mid]) low = mid + 1 ;
             else  low = mid - 1;
            }
             cout<<"index: "<<result<<endl;
             return 0;
6. Things I still need to learn:
   - HashMap/unordered_map - how does it make things faster?
   
   */