vector<int> rotLeft(vector<int> a, int d) {
    //rotate(a.begin(), a.begin()+d, a.end());
    int mod = d % a.size(); // Get the starting position of rotated array
    vector<int> newArr;

    for (int i = 0; i < a.size(); i++)
      newArr.push_back(a[(mod + i) % a.size()]);

    return newArr;
}