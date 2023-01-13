
class Vector {
    private:
        int size;
        double* component;

    public:
        //Constructors
        Vector();
        Vector(int,double*&);
        //CopyConstructor
        Vector(Vector&);
        //Destructor
        ~Vector();

        //setters
        void setSize(int nSize);
        void setComponent(double*& nComponent);

        //getters
        int getSize();
        double* getComponent();

        //Service Methods
        void print();
        double norm() const;
        double sProduct(Vector&) const;
        Vector add(const Vector&) const;
        Vector sub(const Vector&) const;
};