#include<iostream>
using namespace std;

enum Raw {R1, R2, R3};
enum Product{P1, P2, P3};

struct RawMaterial {
	Raw r;
	int quan;
};

struct Pro {
	struct node {
		RawMaterial rm;
		node* next;
	};
	node* headnode;
	Product p;
	int q;
	Pro* pro;
};


void AddRaw(Pro& obj, RawMaterial rawm) {
	Pro::node* newnode  = new Pro::node();
	newnode->rm.r = rawm.r;
	newnode->rm.quan = rawm.quan * obj.q;
	newnode->next = nullptr;

	if (rawm.r == R1) {
		obj.headnode = newnode;
		return;
	}
	Pro::node* temp = obj.headnode;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = newnode;
	temp = newnode;
}
void Print(Pro& obj) {
	Pro::node* temp = obj.headnode;
	while (temp != nullptr) {
		cout << "The type " << temp->rm.r << " with total qauntity " << temp->rm.quan;
		temp = temp->next;
	}
}

void Total(Pro& obj, int *arr) {
	int total1 = 0;
	int total2 = 0;
	int total3 = 0;
	Pro* tem = &obj;
	while (tem->pro != NULL) {
		Pro::node* temp = obj.headnode;
		
		while (temp != nullptr) {
			if (temp->rm.r == R1) {
				total1 += temp->rm.quan;
			}
			else if (temp->rm.r == R2) {
				total2 += temp->rm.quan;
			}
			else {
				total3 += temp->rm.quan;
			}
			temp = temp->next;
		}
		
		tem = tem->pro;
	}
	arr[0] = total1;
	arr[1] = total2;
	arr[2] = total3;

}



int main() {
	Pro obj = { nullptr, P1, 2, nullptr };

	RawMaterial re1 = { R1, 5 };
	RawMaterial re2 = { R2, 4 };
	RawMaterial re3 = { R3, 3 };
	AddRaw(obj, re1);
	AddRaw(obj, re2);
	AddRaw(obj, re3);
	Print(obj);
	//int result = Total(obj);
	
	
	
	Pro obj2 { nullptr, P2, 4,nullptr} ;
	obj.pro = &obj2;
	RawMaterial ro1 = { R1, 1 };
	RawMaterial ro2 = { R2, 2 };
	RawMaterial ro3 = { R3, 1 };
	AddRaw(obj2, ro1);
	AddRaw(obj2, ro2);
	AddRaw(obj2, ro3);
	Print(obj2);
	/*int result = Total(obj2);*/
	

	Pro obj3{nullptr, P3, 1, nullptr};
	obj2.pro = &obj3;
	RawMaterial ra1 = { R1, 5 };
	RawMaterial ra2 = { R2, 5 };
	RawMaterial ra3 = { R3, 5 };
	AddRaw(obj2, ra1);
	AddRaw(obj2, ra2);
	AddRaw(obj2, ra3);
	Print(obj2);
	//int result = Total(obj2);
	

	int arr[3] = {0,0,0};
	Total(obj, arr);
	for (int i = 0; i < 3; i++) {
		cout << "The total raw materials for type " << i + 1 << " is " << arr[i];
	}
}