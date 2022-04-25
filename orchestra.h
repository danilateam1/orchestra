#include <string>
#include <iostream>
using namespace std;
class Musician {
public:
	Musician(string fullname_ = "");
	string getfullname();
	string getspec();
	void take_place();
	void rehearsal();
	void play();
protected:
	string fullname;
};
class Conductor : public Musician {
public:
	Conductor(string fullname_ = "");
	string getspec();
	void rehearsal();
	void play();
};
class Strings : public Musician {
public:
	Strings(string fullname_ = "");
	string getspec();
	void rehearsal();
};
class Wind : public Musician {
public:
	Wind(string fullname_ = "");
	string getspec();
	void rehearsal();
};
class Drum : public Musician {
public:
	Drum(string fullname_ = "");
	string getspec();
};
class Bowed : public Strings {
public:
	Bowed(string fullname_ = "");
	string getspec();
	void rehearsal();
};
class Triangle : public Drum {
public:
	Triangle(string fullname_ = "");
	string getspec();
	void take_place();
	void rehearsal();
	void play();
};
class Violinist :public Bowed {
public:
	Violinist(string fullname_ = "");
	string getspec();
	void take_place();
	void rehearsal();
	void play();
};
class Harphist : public Strings {
	public:
	Harphist(string fullname_ = "");
	string getspec();
	void take_place();
	void rehearsal();
	void play();
};
class Cellist : public Bowed {
public:
	Cellist(string fullname_ = "");
	string getspec();
	void take_place();
	void rehearsal();
	void play();
};
class Drummer :public Drum {
public:
	Drummer(string fullname_ = "");
	string getspec();
};
class Flutist :public Wind {
public:
	Flutist(string fullname_ = "");
	void take_place();
	void rehearsal();
	void play();
	string getspec();
};
class Clarnetist :public Wind {
public:
	Clarnetist(string fullname_ = "");
	string getspec();
	void take_place();
	void rehearsal();
	void play();
};

class Orchestra {
	Conductor conductor;
	Flutist flutist;
public:
	Orchestra() :conductor("Skulskiy"), flutist("Ivan Petrovich") {};
	void take_place() {
		cout << flutist.getfullname()<<' ';
		flutist.take_place();
		cout << conductor.getfullname()<<' ';
		cout<<conductor.getspec()<<' ';
		conductor.take_place();
	}
};