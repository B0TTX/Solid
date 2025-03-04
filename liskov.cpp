#include <iostream>
using namespace std;

class Rectangle {
    protected:
        double height;
        double width;
    
    public:
        Rectangle(int h, int w) : height(h), width(w) {}
    
        virtual int area() const {
            return width * height;
        }

        double getWidth() const {
            return width;
        }

        double getHeight() const {
            return height;
        }

        virtual void setWidth(double w){
            width = w;
        }

        void setHeight(int h) {
            height = h;
        }
};

class Square : public Rectangle{
    public:
        Square(double size) : Rectangle(size, size) {}

        void setWidth(double w) override {
            width = height = w;
        }
};

int main(){
    Rectangle* rect = new Square(20.00);
    rect->setWidth(10);
    cout << "Rectangle Width: " << rect->getWidth() << "\n";
    delete rect;
    return 0;
}