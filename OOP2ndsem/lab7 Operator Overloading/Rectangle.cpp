#include "Rectangle.h"

	Rectangle::Rectangle()
	{
	    length=0;
	    breadth=0;
	}
	
	Rectangle::Rectangle(double len, double bre)
	{
	    length=len;
	    breadth=bre;
	}
	Rectangle operator+(Rectangle const &rec1,Rectangle const &rec2)
	{
	    return Rectangle(rec1.length+rec2.length,rec1.breadth+rec2.breadth);
	}
	
	bool operator > (Rectangle const &rec1,Rectangle const &rec2)
	{
	    int area1=rec1.length*rec1.breadth;
	    int area2=rec2.length*rec2.breadth;
	    
		if (area1>area2)
		{
	        return true;
	    }
		else
		{
	        return false;
	    }
	}
	
	Rectangle operator * (Rectangle const &rec1, Rectangle const &rec2)
	{
	    return Rectangle(rec1.length*rec2.length,rec2.breadth*rec1.breadth);
	}
