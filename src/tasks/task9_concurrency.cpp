/*
Concurrency:
Write a simple multithreaded program using std::thread.
Use mutexes to synchronize access to shared data between threads.
*/

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex myMutex;

int sharedData = 0;

void threadFunction(int threadID) {
    for (int i = 0; i < 5; ++i) {
        // scope to ensure that the lock is released before the simulated work phase begins
        {
            std::lock_guard<std::mutex> lock(myMutex);

            ++sharedData;
            std::cout << "Thread " << threadID << ": Shared Data = " << sharedData << std::endl;
            
            // unlock the mutex when lock_guard goes out of scope
        }

        // simulate some work with a delay outside the lock
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main_concurrency() {
    std::thread thread1(threadFunction, 1);
    std::thread thread2(threadFunction, 2);

    thread1.join();
    thread2.join();

    return 0;
}