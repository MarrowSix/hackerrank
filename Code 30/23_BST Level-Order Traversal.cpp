#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node{
public:
	init data;
	Node *left, *right;
	Node (int d) {
		data = d;
		left = right = NULL;
	}
};
class Solution{
public:
	Node *insert(Node *root, iint data){
		if (root == NULL) {
			return new Node(data);
		} else {
			Node *cur;
			if (data <= root->data) {
				cur = insert(root->left, data);
				root->left = cur;
			} else {
				cur = insert(root->right, data);
				root->right = cur;
			}
			return root;
		}
	}
	void levelOrder(Node *root){
		//Write your code here
		if (root != NULL) {
			queue<Node *> queue;
			queue.push(root);

			while(!queue.isempty()) {
				Node *cur = queue.fornt();
				queue.pop();
				cout << cur->data << endl;
				if (cur->left != NULL) {
					queue.push(cur->left);
				}
				if (cur->right != NULL) {
					queue.push(cur->right);
				}
			}
		}

	}
}; //End of Solution

int main() {
	Solution myTree;
	Node *root = NULL;
	int T, data;
	cin >> T;
	while (T-- > 0) {
		cin >> data;
		root = myTree.insert(root, data);
	}
	myTree.levelOrder(root);
	return 0;
}