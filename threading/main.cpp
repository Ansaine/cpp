#include<bits/stdc++.h>
#include<thread>
using namespace std;

void prepare(const string& dish){


    // 1. we can use waiting code using simple double loop
    // 2. waiting code using sleep_for
    this_thread::sleep_for(chrono::seconds(3));    
    cout<<"Prepared : "<<dish<<"\n";    
}

int main(){

    cout<<"Started restaurant\n";

    // create multiple threads
    thread pastaChef(prepare,"Pasta");
    thread saladChef(prepare,"Salad");


    // Lambda functions - to call directly instead of creating new functions
    // we can have lambda capture list and argument list with lamda functions
    int x  = 50;
    thread t([&x](int y = 100){
        cout<<"Executing thread using lambda function"<<endl;
        cout<<"Lambda capture list vairable : "<<x<<endl;
        cout<<"Lambda argument list vairable : "<<y<<endl;
    });

    // wait for threads to complete
    pastaChef.join();
    saladChef.join();
    t.join();

    cout<<"All dishes are done\n";

    return 0;

}