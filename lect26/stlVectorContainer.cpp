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
    // vector<int> vec={1,2,3,4,5};
    // cout << *(vec.begin())<<endl ;
    // cout << *(vec.end())<< endl;  //end pointing to just to place just after the place  last index
    // cout << *(vec.end()-1)<< endl;

    
    //iterator (by this we can easy access the memory locations)
    vector<int> vec = {1, 2, 3, 4,5};
   // vector<int>::iterator it; // it is same as (i in for loop-initializer) but it stores adderss/index
    // for (it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    //we csn write this ( vector<int>::iterator it ) or (auto)  


    //reverse loop
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}