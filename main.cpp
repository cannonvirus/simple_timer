#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

class TimerBase {
    public:
        TimerBase() : m_start(system_clock::time_point::min()) {}

        void Clear() {
            m_start = system_clock::time_point::min();
        }

        bool IsStarted() const {
            return (m_start.time_since_epoch() != system_clock::duration(0));
        }

        void Start() {
            m_start = system_clock::now();
        }

        unsigned long GetMs() {
            if (IsStarted()) {
                system_clock::duration diff;
                diff = system_clock::now() - m_start;
                return (unsigned)(duration_cast<milliseconds>(diff).count());
            }
            return 0;
        }
    
    private:
        system_clock::time_point m_start;
};

int main(int, char**) {
    TimerBase timer;
    timer.Start();

    int total = 0;
    for (int i = 1; i < 1000000; ++i) {
        total += i;
    }
    cout << timer.GetMs() << " MS" << endl;

    timer.Clear();
    
    timer.Start();

    for (int i = 1; i < 1000000; ++i) {
        total += i;
    }
    cout << timer.GetMs() << " MS" << endl;
}
