#include <iostream>

class area_cl {
public:
  double height;
  double width;
};



class rectangle : public area_cl {
public:
  int area();
  rectangle(int x, int y){
    std::cout << "area_cl constructor called" << std::endl;
    height = x;
    width = y;
  }
    
};

int rectangle::area(){
  return height*width;
}

class isosceles : public area_cl{
public:
  int area();
  isosceles(int x, int y){
    std::cout << "area_cl constructor called" << std::endl;
    height = x;
    width = y;
  }
};

int isosceles::area(){
  return height*width/2;
}





int main(void){
  int height, width;
  std::cout << "height :";
  std::cin  >> height;
  std::cout << "\nwidth :";
  std::cin  >> width;
  isosceles ob1(height, width);
  rectangle  ob2(height, width);
  std::cout << "isosceles area is " << ob1.area() << std::endl;
  std::cout << "rectangle area is " << ob2.area() << std::endl;



  

  return 0;
  
}
