/*
chrono is a namespace used for time purposes.

1. We can manually lock() and unlock() mutexes or
2. Use lock_guard<mutex> that automatically unlocks when it goes out of scope

*/ 

#include<bits/stdc++.h>
#include<thread>
#include<mutex>
using namespace std;

mutex boardMutex;

// 1. Manual locking and unlocking
void useCuttingBoard(const string& chef){
    boardMutex.lock();
    cout<<"Board is used my chef : "<<chef<<"\n";
    this_thread::sleep_for(chrono::seconds(2));         
    boardMutex.unlock();
}

// 2. Using lock_guard<mutex>
void autoMutex(){
    lock_guard<mutex> lock(boardMutex);
    this_thread::sleep_for(chrono::seconds(3));         
    cout<<"Final Chef is using the board"<<endl;
}


int main(){

    thread chef1(useCuttingBoard,"MasterChef 1");
    thread chef2(useCuttingBoard,"MasterChef 2");
    thread chef3(autoMutex);

    chef1.join();
    chef2.join();
    chef3.join();

    cout<<"Both chefs are done\n";
    return 0;

}