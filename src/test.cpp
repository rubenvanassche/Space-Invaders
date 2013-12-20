/*
#include <vector>
#include <iostream>
#include <memory>

class Func {
public:
    virtual void call() {
        std::cout<< "Func -> call()" << std::endl;
    }
};

class Foo : public Func {
public:
    void call() {
        std::cout<< "Foo -> call()" << std::endl;
    }
};

class Bar : public Func {
public:
    void call() {
        std::cout<< "Bar -> call()" << std::endl;
    }
};

int main(int argc, char** argv) {
	   std::vector<Func*> functors;

	   Func* x = new Func();
	   Func* y = new Foo();
	   Func* z = new Bar();
	    functors.push_back( x );
	    functors.push_back( y );
	    functors.push_back( z );

	    for (auto functor : functors)
	        functor->call();
}

*/
