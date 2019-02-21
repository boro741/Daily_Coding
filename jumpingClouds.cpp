// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int jump = 0;
    int i=0;
    for(int i=0;i < c.size()-1;i++){
        if(c[i+2] == 0){
            jump++;
            i++;
        }else if(c[i+1] == 0){
            jump++;
        }
    }
    return jump;
}