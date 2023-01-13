#ifndef _AREA_H
#define _AREA_H

class Area {
	public:
		//onstructors of Area class
		Area(const char *n);
		virtual ~Area();
		//getter
		void getColor() const;
		//virtual method for area calculations
		virtual double calcArea() const = 0;
		//vitual method for perimieter
		virtual double calcPer() const = 0;
	private:
		//property of Area class
		char color[11];
};
#endif
