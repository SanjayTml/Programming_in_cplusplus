/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
        //setter
        void setName(std::string);
        //getter
        std::string getName();  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
        //setters
        void setX(double);
        void setY(double);
        //getters
        double getX();
        double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        //setter
        void setEdge(int);
        //getter
        int getEdge();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
        double perimeter(); //returns perimeter
        double area();  //returns area
        //setter
        void setRadius(double);
        //getter
        double getRadius();
};

class Rectangle : public RegularPolygon {
    private:
        double width, height;
    public:
        Rectangle(const std::string&, double, double, double, double);
        Rectangle();
        Rectangle(const Rectangle&);
        //methods
        double perimeter();
        double area();
        //setter
        void setWidth(double);
        void setHeight(double);
        //getter
        double getWidth();
        double getHeight();
};

class Square : public Rectangle {
    private:
        double length;
    public:
        Square(const std::string&, double, double, double);
        Square();
        Square(const Square&);
        //methods
        double perimeter();
        double area();
        //setter
        void setLength(double);
        //getter
        double getLength();
};

#endif
