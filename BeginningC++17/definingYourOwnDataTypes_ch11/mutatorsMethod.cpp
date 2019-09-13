#include<iostream>
class Box
{
    private:
      double length {1.0};
      double width {1.0};
      double height {1.0};
    public:
      Box() = default;
      Box(double l, double w, double h);
      double volume();
      double getLength(){
          return length;
      }
      double getWidth(){
          return width;
      }
      double getHeight(){
          return height;
      }
      //set functions
      void setLength(double lv){
          if(lv > 0) 
            length = lv;
      }
      void setWidth(double wv){
          if(wv>0)
            width = wv;
      }
      void setHeight(double hv){
          if(hv>0)
            height = hv;
      }
};
int main(){
    Box mybox;
    mybox.setHeight(20);
    mybox.setLength(-12); // not set, when getLength() called, 1 is returned
    mybox.setWidth(20);
    std::cout << "My box dimensions are " << 
        "\nLength: " << mybox.getLength() << 
        "\nWidth: " << mybox.getWidth() << 
        "\nHeight: " << mybox.getHeight() << "\n";

}