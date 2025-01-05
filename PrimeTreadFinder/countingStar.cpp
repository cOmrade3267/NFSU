#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

vector<int> primes;
mutex mu;

bool isPrimeNumber(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void isPrime(int start, int end) {
    vector<int> localPrimes;
    for (int i = start; i <= end; i++) {
        if (isPrimeNumber(i)) {
            localPrimes.push_back(i);
        }
    }
    lock_guard<mutex> locker(mu);
    primes.insert(primes.end(), localPrimes.begin(), localPrimes.end());
}

int main() {
    int numThreads;
    int start, end, totalPrimeNum=0;
    cout << "Enter Number To Find Prime Numbers Between: " << endl;
    cin >> start >> end;
    
    cout << "Enter Number Of Threads: " << endl;
    cin >> numThreads;

    if (numThreads > (end - start)) {
        cout << "Number Of Threads Cannot Be Greater Than The Range." << endl;
        return 1;
    }
        vector<thread> threads;
    int workToThread = (end - start) / numThreads;
    for (int i = 0; i < numThreads; ++i) {
        int rangeStart = start + (i * workToThread);
        int rangeEnd = (i == numThreads - 1) ? end : rangeStart + workToThread - 1;

        threads.push_back(thread(isPrime, rangeStart, rangeEnd));
    }
    for (auto& thread : threads) {
        thread.join();
    }
    cout << "Prime numbers: ";
    for (const int& prime : primes) {
        totalPrimeNum+=1;
        cout << prime << " ";
    }
    cout << endl;
    cout<<"Total Prime Number Is : "<<totalPrimeNum<<endl;

    return 0;
}
