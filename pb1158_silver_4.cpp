#include <iostream>
using namespace std;

class Node {
	int elem;
	Node* next;

	friend class C_LinkedList;
};
struct C_LinkedList {
public:
	C_LinkedList() {
		tail = curNode = NULL;
		num_of_data = 0;
	}

	bool Empty() {
		return (tail == NULL);
	}

	int List_size() {
		int list_size = 0;
		if (Empty()) {
			return list_size;
		}
		else {
			Node* curNode = tail->next;
			while (curNode != tail) {
				list_size++;
				curNode = curNode->next;
			}
			list_size++;
			return list_size;
		}
	}

	void Append(int elem) {
		Node* newNode = new Node();
		newNode->elem = elem;
		if (tail == NULL) {
			tail = newNode;
			newNode->next = newNode;
		}
		else {
			newNode->next = tail->next;
			tail->next = newNode;
			tail = newNode;
		}
	}


	int Delete(int k) {
		int removeNum = 0;
		int cnt = 0;
		Node* pre = tail;
		Node* cur = tail->next;
		while (cnt < k - 1) {
			pre = cur;
			cur = cur->next;
			cnt++;
		} //cur이 지워야하는 node 가리킴
		removeNum = cur->elem;
		pre->next = cur->next;
		tail = pre;
		return removeNum;
	}

	void Print() {
		Node* curNode = tail->next;
		while (curNode != tail) {
			cout << curNode->elem << " ";
			curNode = curNode->next;
		}
		cout << curNode->elem; //curNode == tail
	}
	
private:
	int num_of_data;
	Node* tail;
	Node* curNode;
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	C_LinkedList test = C_LinkedList();

	for (int i = 1; i <= n; i++) {
		test.Append(i);
	}	
	
	cout << "<";
	for (int j = 0; j < n; j++) {
		if (j == n - 1) {
			cout << test.Delete(k) << ">";
			break;
		}
		cout << test.Delete(k) << ", ";
	}
} 
