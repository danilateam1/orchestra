#include "Orchestra.h"
Musician::Musician(string fullname_) {
	fullname = fullname_;
}
void Musician::take_place() {
	cout << "on the base\n";
}
void Musician::rehearsal() {
	cout << "Is up to play\n";
}
void Musician::play() {
	cout << "is starting to play on\n";
}
string Musician::getfullname() {
	return fullname;
};
string Musician::getspec() {
	return "Musician";
};
Conductor::Conductor(string fullname_):Musician(fullname_) {};

void Conductor::rehearsal() {
	cout << "Attention please!\n";
}
void Conductor::play() {
	cout << "is starting to conduct\n";
}
string Conductor::getspec() {
	return "Conductor";
};
Strings::Strings(string fullname_) :Musician(fullname_) {};

void Strings::rehearsal() {
	cout << "is taking a tool in left hand\n";
}
string Strings::getspec() {
	return "StringsPlayer";
};
Wind::Wind(string fullname_) :Musician(fullname_) {};
void Wind::rehearsal() {
	cout << "is soothing suffocation\n";
}
string Wind::getspec() {
	return "WindPlayer";
};
Bowed::Bowed(string fullname_) :Strings(fullname_) {};
void Bowed::rehearsal() {
	Strings::rehearsal();
	cout << "taking bow in right hand\n";
}
Drum::Drum(string fullname_):Musician(fullname_) {};
string Drum::getspec() {
	return "Drumplayer";
};
Triangle::Triangle(string fullname_) : Drum(fullname_) {};

void Triangle::take_place() {
	cout << "Triangle player ";
	Drum::take_place();
}
void Triangle::rehearsal() {
	cout << "Triangle player ";
	Drum::rehearsal();
}
void Triangle::play() {
	cout << "Triangle player ";
	Drum::play();
}
string Triangle::getspec() {
	return "Triangle player";
};
Violinist::Violinist(string fullname_):Bowed(fullname_) {};
void Violinist::rehearsal() {
	cout << "Violinsit ";
	Bowed::rehearsal();

}
void Violinist::take_place() {
	cout << "Violinsit ";
	Musician::take_place();

}
void Violinist::play() {
	cout << "Violinsit ";
	Musician::play();

}
string Violinist::getspec() {
	return "Violinist";
};
Harphist::Harphist(string fullname_) :Strings(fullname_) {};
void Harphist::rehearsal() {
	cout << "Harphist ";
	Strings::rehearsal();

}
void Harphist::take_place() {
	cout << "Harphist ";
	Musician::take_place();

}
void Harphist::play() {
	cout << "Violinsit ";
	Musician::play();

}
string Harphist::getspec() {
	return "Harphist";
};
Cellist::Cellist(string fullname_):Bowed(fullname_) {};
void Cellist::rehearsal() {
	cout << "Cellist ";
	Bowed::rehearsal();

}
void Cellist::take_place() {
	cout << "Cellist ";
	Musician::take_place();

}
void Cellist::play() {
	cout << "Cellist ";
	Musician::play();

}

string Cellist::getspec() {
	return "Cellist";
};
Flutist::Flutist(string fullname_) :Wind(fullname_) {};
void Flutist::rehearsal() {
	cout << "Flutist ";
	Wind::rehearsal();

}
void Flutist::take_place() {
	cout << "Flutist ";
	Musician::take_place();

}
void Flutist::play() {
	cout << "Flutist ";
	Musician::play();

}
string Flutist::getspec() {
	return "Flutist";
};
Clarnetist::Clarnetist(string fullname_):Wind(fullname_) {};
void Clarnetist::rehearsal() {
	cout << "Clarnetist ";
	Wind::rehearsal();

}
void Clarnetist::take_place() {
	cout << "Clarnetist ";
	Musician::take_place();

}
void Clarnetist::play() {
	cout << "Clarnetist ";
	Musician::play();

}
string Clarnetist::getspec() {
	return "Clarnetist";
};
