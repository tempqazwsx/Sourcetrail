/*
class e
{
};
class x: public e
{
};
struct y;
enum z;

x foox();
y fooy();
z fooz();
*/

const bool *ab(int a, int b);

bool const *abc(int a, int b);

bool *const abcd(int a, int b);

int main();
void foo();
int sum(int a, int b);
int diff(int a, int b);

void funk();

class A
{
public:
	A()
		: m_importantValue(42)
		, m_importanterValue('r')
		, m_importantestValue(3.14159265359f)
	{
	}
	
	~A()
	{
	}
	
	void doImportantStuff()
	{
		m_importantValue *= 1;
	}
	
	void doModeratelyImportantStuff()
	{
		m_importanterValue = 'R';
		
		sum(21, 21);
	}
	
private:
	int m_importantValue;
	char m_importanterValue;
	float m_importantestValue;
};

class B : public A {};

class C
{
public:
	C()
		: m_valuable(0)
	{
	}
	
	~C()
	{
	}
	
	void solveAllProblems()
	{
		A aInstance;
		aInstance.doImportantStuff();
		aInstance.doModeratelyImportantStuff();
	}
	
private:
	int m_valuable;
};

A globalA;

typedef A* C;
