#include <iostream>
#include <map>


using namespace std;
int main(){
    // map<string, int> m;   //unique key exist 
    // m["tv"]=100;         //m[key] = value
    // m["laptop"]=50;
    // m["headphones"]=50;
    // m["tablet"]=120;
    // m["watch"]=50;

    // //m.insert({"camera",25});
    // //m.emplace("camera",25);

    // //cout << m["laptop"] << endl ;
    // //m.erase("tv");


    // // for(auto val :m ){
    // //     cout<< val.first << " "<< val.second << endl ;  // give results in ascending order
    // // }

    // //m.emplace("camera",25);
    // if(m.find("camera") != m.end()){  //last value kai baad wali space
    //  cout<< "found \n" ;
    // }
    // else{
    //     cout<< "not found\n";
    // }

  
    multimap<string ,int > m;  //keys are not unique
    m.emplace("tv" ,100);
    m.emplace("tv" ,100);
    m.emplace("tv" ,100);
    m.emplace("tv" ,100);

    m.erase(m.find("tv"));

    for(auto val :m ){
        cout<< val.first << " "<< val.second << endl ;  // give results in ascending order
    }

    return 0;
}
