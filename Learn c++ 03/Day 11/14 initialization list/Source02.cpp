class Integer {
private:
	int m_i;
public:
	Integer(int i);
};

Integer::Integer(int i) : m_i(i) {
	
}

int main() {
	Integer u(5);
}

/*
- Initialization list can be used to initialize data members only.
- Attempting to initialize static data member in initialization 
results in compilation error.
- To initialize data members, between intialization list and the body of a constructor, 
always prefer initialization list
*/