#include <iostream>
#include<thread>
#include <chrono>
using namespace std;


void sleep(int seconds = 10) { //sleep for 10 seconds by default
  int milliseconds = seconds * 1000; //calculate the number of milliseconds from the seconds provided
	cout << "sleep - thread: " << this_thread::get_id() << " started\n";
  this_thread::sleep_for(chrono::milliseconds(milliseconds)); //sleep for the milliseconds specified
}

void sleepTime(int seconds = 10) {
  cout << "\nStarting sleep timer\n";
  sleep(seconds); 
  cout << "sleep - thread: " << this_thread::get_id() << " end\n";
}  

void sleepTimer(void) {
sleepTime();
}


#include <iostream>
#include<thread>
#include <chrono> 
using namespace std; 


const int timerOneDuration = 5;
const int timerTwoDuration = 10;



void firstTimer() {
  cout << "Thread 1: " << this_thread::get_id() << " started"<<endl;
  sleep(timerOneDuration); 
  cout << "Thread 1: " << this_thread::get_id() << " ended" <<endl;
}

void secondTimer() {
  cout << "Thread 2: " << this_thread::get_id() << " started"<<endl;
  sleep(timerTwoDuration); 
 cout << "Thread 2: " << this_thread::get_id() << " ended"<<endl;
}

 
int joinThreads(void) {
  
  cout << "Main thread: " << this_thread::get_id() << " started"<<endl; 
  thread thread1(firstTimer); 
  thread thread2(secondTimer); 

  thread1.join();
  thread2.join(); 

  cout << "Main thread: " << this_thread::get_id() << " ended"<<endl; 
  return 0;
}

int detachThreads(void) {
  cout << "\nDetach Threads"<<endl;
  cout << "Main thread: " << this_thread::get_id() << " started"<<endl;

  thread thread1(firstTimer); 
  thread1.detach(); 
  thread thread2(secondTimer); 
  thread2.detach(); 
  sleepTime(11);

  cout << "Main thread: " << this_thread::get_id() << " ended"<<endl;

  return 0;
}



void joinDetachThreads(void) {
joinThreads();
detachThreads();
}