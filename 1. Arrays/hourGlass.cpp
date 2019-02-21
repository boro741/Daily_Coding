// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int maxSum = INT_MIN;

    for(int row = 0;row<4;row++){
        for(int col=0;col<4;col++){
          int sum = arr[row][col] + arr[row][col + 1] + arr[row][col + 2] +
                            arr[row + 1][col + 1] + 
                    arr[row+2][col] + arr[row+2][col+1]+arr[row+2][col+2];

          if(maxSum < sum){
              maxSum = sum;
          }
        }
    }

    return maxSum;
}