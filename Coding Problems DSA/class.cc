class Point{
private:
	int x,y;
public:
	// Default Constructor (no parameters)
	Point(){
		x = 0; y = 0;
	}
	// Parameterized Constructor, this => current object
	Point(int x,int y){
		this.x = x;
		this.y = y;
	}

	Point(Point p){
		this.x = p.x();
		this.y = p.y();
	}
};