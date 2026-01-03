#include <iostream>
#include <vector>

using namespace std;
int main(){
    // vector<int> a;
    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(2);
    // a.push_back(2);
    // a.pop_back();
    // cout<<a.size()<<endl;
    // cout<<a.capacity()<<endl;
    // cout<< a.at(0)<<endl;
    // cout<< a[2]<<endl;
    // cout<< a.front()<<endl;
    // cout<< a.back();

    // vector<int> arr={1,2,3,4,5};
    // for(int val :arr){    //for each loop
    //     cout<< val;
    // }
    // vector<int> vec(3,10);  //3- sizeof vector ,10-val of each element
    // for(int val :vec){    //for each loop
    //     cout<< val <<" ";
    // }
    // vector<int> vec1={1,2,3,4,5};
    // vector<int> vect2(vec1);
    // for(int val :vect2){    //for each loop
    //     cout<< val<<" ";
    // }

    //deletion
    // vector<int> vec={1,2,3,4,5};
    // vec.erase(vec.begin()+2);
    // for(int val :vec){    //for each loop
    //     cout<< val<<" ";
    // }

    //vec.erase(start,end) //start-included ,end-excluded
    // vec.erase(vec.begin()+1 ,vec.begin()+3 );  
    // for(int val :vec){   
    //     cout<< val<<" ";
    // }

    //insert fn.= insert element in any specifc postion
    //vec.insert(position,val)
    //vec.insert(vec.begin()+2 ,100);
    // for(int val :vec){   
    //     cout<< val<<" ";
    // }

    //clear fn. delete all the elements in vector but capacity remains same
    // vec.clear();
    // cout<<vec.capacity()<<endl;
    // cout<<vec.empty()<<endl; //checks vec is epmty or not

    //iterators  - vec.begin ,vec.end => it reurns index number
    vector<int> vec={1,2,3,4,5};
    cout << *(vec.begin()) ;
    cout << *(vec.end());  //end pointing to just to place just after the place  last index
}