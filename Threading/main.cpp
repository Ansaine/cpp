#include<bits/stdc++.h>
#include<thread>
using namespace std;

void prepare(const string& dish){

    // waiting code
    for(int i = 0; i <1e9;i++){
        for(int j = 0; j < 5; j++){
            continue;
        }
    }
    
    cout<<"Prepared : "<<dish<<"\n";    
}

int main(){

    cout<<"Started restaurant\n";

    // create multiple threads
    thread pastaChef(prepare,"Pasta");
    thread saladChef(prepare,"Salad");

    // wait for threads to complete
    pastaChef.join();
    saladChef.join();


    cout<<"All dishes are done\n";

    return 0;

}