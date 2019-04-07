#include <iostream>
#include<set>
using namespace std;
int main()
{
	//declaration
    set< pair<int,int> > st;
 
 
	//read 4 values from user
    int x,y;
    for(int i=0; i<4; i++)
    {
        cin>>x>>y;
        st.insert(make_pair(x,y));
    }
	//then you have a set of values of non-duplicate x,y
 
 
	//Access the elements
    set< pair<int,int> >::iterator it;
    for(it=st.begin(); it!=st.end(); ++it)
    {
        //first is x, y is the second element
        cout<<it->first<<" "<<it->second<<endl;
    }
 

	return 0;
}