/*
chrono is a namespace used for time purposes.

There is lock_guard<mutex> also that auto manages the unlocking of mutexes 
based on the scope. Check that out also

*/ 


#include<bits/stdc++.h>
#include<thread>
#include<mutex>
using namespace std;

mutex boardMutex;

void useCuttingBoard(const string& chef){
    boardMutex.lock();
    cout<<"Board is used my chef : "<<chef<<"\n";
    this_thread::sleep_for(chrono::seconds(2));         
    boardMutex.unlock();
}

int main(){

    thread chef1(useCuttingBoard,"MasterChef 1");
    thread chef2(useCuttingBoard,"MasterChef 2");

    chef1.join();
    chef2.join();

    cout<<"Both chefs are done\n";
    return 0;

}