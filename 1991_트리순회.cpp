//#include <bits/stdc++.h>
//
//using namespace std;
//
//struct Tree {
//	string data;
//	Tree* left, * right;
//public :
//	Tree() {
//		data = "";
//		left = NULL;
//		right = NULL;
//	}
//	void SetData(char data) {
//		this->data = data;
//	}
//	void SetLeft(Tree* left) {
//		this->left = left;
//	}
//	void SetRight(Tree* right) {
//		this->right = right;
//	}
//	void static PreOrder(Tree* root) {
//		if (root) {
//			cout << root->data;
//			PreOrder(root->left);
//			PreOrder(root->right);
//		}
//	}
//	void static PostOrder(Tree* root) {
//		if (root) {
//			PostOrder(root->left);
//			PostOrder(root->right);
//			cout << root->data;
//		}
//	}
//	void static InOrder(Tree* root) {
//		if (root) {
//			InOrder(root->left);
//			cout << root->data;
//			InOrder(root->right);
//		}
//	}
//
//};
//
//int main(void) {
//	int n;
//	cin >> n;
//
//	Tree* tree = new Tree[n + 1];
//
//	for(int i = 0 ; i < n ; i++){
//		char data, left, right;
//		cin >> data >> left >> right;
//
//		tree[(int)(data - 'A')].SetData(data);
//
//		if (left == '.') {
//			tree[(int)(data - 'A')].SetLeft(NULL);
//		}
//		else {
//			tree[(int)(data - 'A')].SetLeft(&tree[(int)(left-'A')]);
//		}
//
//		if (right == '.') {
//			tree[(int)(data - 'A')].SetRight(NULL);
//		}
//		else {
//			tree[(int)(data - 'A')].SetRight(&tree[(int)(right - 'A')]);
//		}
//	}
//	Tree* root = &tree[0];
//	Tree::PreOrder(root);
//	cout << '\n'; 
//	Tree::InOrder(root);
//	cout << '\n'; 
//	Tree::PostOrder(root);
//	cout << '\n';
//}