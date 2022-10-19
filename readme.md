# Simple Timer Class
## 출처
 - Optimized C++ (커트 건서로스)

## 사용법
```c++
// class 선언
TimerBase timer;

// Timer 
timer.Start();
do_something();
cout << timer.GetMs() << " MS" << endl;

// 2번 이상 사용 시
timer.Start();
do_something();
cout << timer.GetMs() << " MS" << endl;

timer.Clear();

timer.Start();
do_something();
cout << timer.GetMs() << " MS" << endl;

```