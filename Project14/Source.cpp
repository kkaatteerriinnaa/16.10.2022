#include <iostream>
using namespace std;

class Transport
{
	string type;
	string color;
	int speed;
	int fuelcons;
	int passenger;
public:
	Transport()
	{
		type = color = "";
		speed = fuelcons = passenger = 0;
	}
	Transport(string t, string c, int s, int f, int p)
	{
		type = t;
		color = c;
		speed = s;
		fuelcons = f;
		passenger = p;
	}
	void Show()
	{
		cout << "Transport: " << type << endl;
		cout << "Color: " << color << endl;
		cout << "Speed: " << speed << " km\\h\n";
		cout << "Fuel consumption: " << fuelcons << " L\\100 km\n";
		cout << "Passengers: " << passenger << endl;
	}
};

class Plane :public Transport
{
	string company;
public:
	Plane()
	{
		company = "";
	}
	Plane(string t, string c, int s, int f, int p, string co) :Transport(t, c, s, f, p)
	{
		company = co;
	}
	void Show()
	{
		Transport::Show();
		cout << "Company: " << company << endl;
	}
};

class Cycle :public Transport
{
	double tire_size;
public:
	Cycle()
	{
		tire_size = 0;
	}
	Cycle(string t, string c, int s, int f, int p, double ti) :Transport(t, c, s, 0, p)
	{
		tire_size = ti;
	}
	void Show()
	{
		Transport::Show();
		cout << "Tire Diameter: " << tire_size << " sm\n";
	}
};

class Jeep :public Transport
{
	bool offroad;
public:
	Jeep()
	{
		offroad = false;
	}
	Jeep(string t, string c, int s, int f, int p, bool off) :Transport(t, c, s, f, p)
	{
		offroad = f;
	}
	void Show()
	{
		Transport::Show();
		if (offroad)
			cout << "Can drive on offroad\n";
		else
			cout << "Cant drive on offroad\n";
	}
};

class Ship :public Transport
{
	double carr_cap;
public:
	Ship()
	{
		carr_cap = 0;
	}
	Ship(string t, string c, int s, int f, int p, double cc) :Transport(t, c, s, f, p)
	{
		carr_cap = cc;
	}
	void Show()
	{
		Transport::Show();
		cout << "Carrying capacity: " << carr_cap << " tones\n";
	}
};

class Truck :public Transport
{
	int HP;
public:
	Truck()
	{
		HP = 0;
	}
	Truck(string t, string c, int s, int f, int p, int hp) :Transport(t, c, s, f, p)
	{
		HP = hp;
	}
	void Show()
	{
		Transport::Show();
		cout << "Horse power: " << HP << "\n";
	}
};

int main()
{
	Plane obj1("Plane", "White", 300, 760, 400, "Turksih Airlines");
	obj1.Show();
	cout << endl;
	Cycle obj2("Cycle", "Black-red", 15, 0, 1, 29);
	obj2.Show();
	cout << endl;
	Jeep obj3("Jeep", "Grey", 280, 14, 4, true);
	obj3.Show();
	cout << endl;
	Ship obj4("Ship", "Dark blue", 37, 50, 800, 1000);
	obj4.Show();
	cout << endl;
	Truck obj5("Truck", "Light grey", 160, 34, 3, 1000);
	obj5.Show();
	cout << endl;
}