#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
	private:
		
    	double length;
    	double breadth;
    	
	public:
		
	    const double getlength()
		{
	        return length;
	    }
	    void setlength(double lng)
		{
	        length=lng;
		}   
	    const double getbreadth()
		{
	        return breadth;
	    }
	    void setbreadth(double bth)
		{
	        breadth=bth;
	    }
        Rectangle(length=1,breadth=3);		 //def const//	   
	    Rectangle(double len,double bre);    
	    
	    bool operator<(Rectangle const &rec1)
	    {
	        int area1=rec1.length*rec1.breadth;
	        int area2=this->length*this->breadth;
	        
			if (area2<area1){return true;}
			else{return false;}
				
   	   }
	    
	    
	    friend Rectangle operator+(Rectangle const &rec1,Rectangle const &rec2);
	    
	    friend bool operator>(Rectangle const &rec1,Rectangle const &rec2);
	    
	    friend Rectangle operator * (Rectangle const &rec1,Rectangle const &rec2);
};	
#endif /* Rectangle_h */
