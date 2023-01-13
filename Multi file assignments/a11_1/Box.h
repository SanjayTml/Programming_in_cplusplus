/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a11_p1
*/

//Definition of class
class Box {
    private:
        double height;
        double width;
        double depth;

    public:
        Box();
        Box(double heigth,double width, double depth);
        Box(Box &obj);
        ~Box();

        //setters
        void setHeight(double newheight);
        void setWidth(double newwidth);
        void setDepth(double newdepth);

        //getters
        double getHeight();
        double getWidth();
        double getDepth();

        //service methods
        void print(int i);
        double volume();

};
