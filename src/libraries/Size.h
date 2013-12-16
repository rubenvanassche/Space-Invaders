#ifndef SIZE_H_
#define SIZE_H_

class Size {
public:
	friend bool operator== (const Size& s1, const Size& s2);

	Size();
	// default constructor

	Size(const int& value);
	// constructor
	Size(const int& width, const int& height);

	Size(const Size& s);

	void operator= (const Size& s);


	void set(const int& width, const int& height);


	unsigned int getWidth() const;


	unsigned int getHeight() const;



private:
	unsigned int fWidth;
	unsigned int fHeight;
};

#endif /* SIZE_H_ */
