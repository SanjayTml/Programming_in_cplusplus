/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a10_p9
*/

//Definition of class
class Complex {
    private:
        double real;
        double img;

    public:
        Complex();
        Complex(double real,double img);
        Complex(Complex &obj);
        ~Complex();

        //setters
        void setReal(double newReal);
        void setImg(double newImg);

        //getters
        double getReal();
        double getImg();

        //service methods
        void print();
        Complex add(Complex& obj);
        Complex sub(Complex& obj);
        Complex mul(Complex& obj);
        Complex conjugate();

};
