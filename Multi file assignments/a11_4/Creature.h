//defininf class creature
class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

//defining derived classes
class lion : public Creature {
    private:
        int strength;
    public:
        lion();
        lion(int, int);
        ~lion();
        void power();
};

class dinosaur : public Creature {
    private:
        double height;
    public:
        dinosaur();
        dinosaur(int, double);
        ~dinosaur();
        void tallness();
};


class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};
