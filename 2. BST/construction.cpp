#include<iostream> 
#include<vector>

using namespace std; 

class BST{
    public:
        int value;
        BST* left;
        BST* right;
    
    BST(int val){
        value = val;
        left = NULL;
        right = NULL;
    }

    // BST& return type because helps in chaining the insert operations.
    BST& insert(int val){
        BST* currentNode = this;
        while(true){
            if(val < currentNode->value){
                if(currentNode->left == NULL){
                    BST* newNode = new BST(val);
                    currentNode->left = newNode;
                    break;
                }else{
                    currentNode = currentNode->left;
                }
            }else{
                if(currentNode->right == NULL){
                    BST* newNode = new BST(val);
                    currentNode->right = newNode;
                    break;
                }else{
                    currentNode = currentNode->right;
                }
            }
        }
        cout<<val<<" inserted successfully"<<endl;
        return *this;
    }

    void contains(int val){
		BST* currentNode = this;
		while(currentNode != NULL){
			if(val < currentNode->value){
				currentNode = currentNode->left;
			} else if(val > currentNode->value){
				currentNode = currentNode->right;
			} else{
				cout<<"Found"<<endl;
				break;
			}
		}
	}

    BST* remove(BST* root,int data ){
		if(root == NULL) return root;
		// If in Left sub tree.
		else if (data < root->value){
			// Gets the removed node (or) root->left points to removed node.
			root->left = remove(root->left,data);
		}
		// Right sub tree.
		else if (data > root->value){
			// Gets the removed node (or) root->left points to removed node.
			root->right = remove(root->right,data);
		}
		/***** Deletion is done here *****/
		else{
			// Case 1: No Child
			if(root->left == NULL && root->right == NULL){
				delete root;
				root = NULL;
                cout<<"Leaf node deleted"<<endl;
				return root;
			}
			// Case 2: One Child
			else if(root->left == NULL){
				BST* temp = root;
				root = root->right;
				delete temp; // Deletes the previous root.
                cout<<"Left node deleted"<<endl;
				return root; // Returns the new root.
			}else if(root->right == NULL){
				BST* temp = root;
				root = root->left;
				delete temp; // Deletes the previous root.
                cout<<"Right node deleted"<<endl;
				return root; // Returns the new root.
			}
			// Case 3: Two Children
			else{
				BST* temp = getMinValue();
                root->value = temp->value;
                root->right = remove(root-right,temp->right);
			}
		}
		return NULL;
	}

    int getMinValue(){
		if(left == NULL){
			return value;
		} else{
			return left->getMinValue();
		}
	}
};

int main() 
{
	BST test(10);
    test.insert(5);
    test.insert(4);
    test.insert(17);
    test.remove(4);
    cout<<test.getMinValue()<<endl;
    //cout<<test.contains(00)<<endl;
	return 0;
} 
