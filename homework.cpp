#include<iostream>
using namespace std;

  class num{
    char ch;
  public:
    int trans(char ch);
  };
  int  num::trans(char ch){
    ch = ch - 48;
    return ch;
  } 
int main(){
  /*先生の宿題作成プログラム
　　数字と演算子が入力され、解を出力*/

  num a, b, c;

  std::cin >> a >> b >> c; 
  
}
