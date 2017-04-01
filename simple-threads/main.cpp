#include <unistd.h>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mx;
std::condition_variable cv;

int * x;

void f1()
{
  sleep(1);
  *x = 1337;
}

void f2()
{
  std::unique_lock<std::mutex> lock(mx);
  cv.wait(lock);
}

int main()
{
  std::thread thread1(f1);
  std::thread thread2(f2);

  thread1.join();
  thread2.join();

  return 0;
}
