#include<bits/stdc++.h>
#include<thread>
#include<mutex>
#include<chrono>

using namespace std;

void backgroundTask(){
    int i = 5;
    while(i--){
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"Running background task "<<i<<endl;
    }
}

int main(){

    thread t1(backgroundTask);
    t1.detach();

    // this_thread::sleep_for(chrono::seconds(2));
    cout<<"Main function finished"<<endl;
    return 0;
}