#include <iostream>
#include <ctime>


class stopwatch{
  time_t start_time;
public:
  
  stopwatch();
  ~stopwatch();
 
  
};
stopwatch::stopwatch(){
  start_time = clock();
  std::cout << "start!!\n" << start_time << "\n" << std::endl;
  std::cout << CLOCKS_PER_SEC << std::endl; 

}

stopwatch::~stopwatch(){
  time_t end_time;
  end_time = clock();
  std::cout << end_time << std::endl;
  std::cout << "経過時間は" <<  (end_time - start_time)/ CLOCKS_PER_SEC<<"です" << std::endl;

}

int main(void){
    stopwatch time;
    char a;
    std::cin >> a;

    return 0;
}


