#include <map>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class Node{
    public:
    int Data;
    Node* left;
    Node* right;
    Node(int val){
        Data = val;
        left = right = NULL;
    }
};

// Building a tree :-
static int idx = -1;
Node* builtTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = builtTree(preorder);
    root->right = builtTree(preorder);

    return root;
}

// Preorder tarversal :-
void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->Data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Inorder Traversal :-
void inorderTarversal(Node* root){
    if(root == NULL){
        return;
    }

    inorderTarversal(root->left);
    cout<<root->Data<<" ";
    inorderTarversal(root->right);
}

// Postorder tarversal :-
void postorderTarversal(Node* root){
    if(root == NULL){
        return;
    }

    postorderTarversal(root->left);
    postorderTarversal(root->right);
    cout<<root->Data<<" ";
}

// Level order tarversal :-
void levelOrderTraversal(Node* root){
    queue<Node*> que;
    que.push(root);

    while(que.size()){
        Node* temp = que.front();
        que.pop();

        cout<<temp->Data<<" ";

        if(root->left){
            que.push(root->left);
        }
        if(root->right){
            que.push(root->right);
        }
    }
}

// If you want print all the levels in the seprate lines .
void levelOrderTraversal2(Node* root){
    queue<Node*> que;
    que.push(root);
    que.push(NULL);

    while(!que.empty()){
        Node* temp = que.front();
        que.pop();

        if(temp == NULL){
            if(!que.empty()){
                que.push(NULL);
                cout<<endl;
                continue;
            } else {
                break;
            }
        }
        cout<<temp->Data<<" ";
        if(temp->left != NULL){
            que.push(temp->left);
        } if(temp->right != NULL){
            que.push(temp->right);
        }
    }
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight,rightHeight)+1;
}

int countOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount = countOfNodes(root->left);
    int rightCount = countOfNodes(root->right);
    return leftCount+rightCount+1;
}

int countSum(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = countSum(root->left);
    int rightSum = countSum(root->right);
    return leftSum+rightSum+root->Data;
}

bool isSameTree(Node* p,Node* q){
    if(p == NULL && q == NULL){
        return true;
    }
    if(p == NULL || q == NULL){
        return false;
    }
    bool isLeft = isSameTree(p->left,p->right);
    bool isRight = isSameTree(p->right,q->right);

    return isLeft && isRight && p->Data == q->Data;
}

// Sub Root :-

bool isSameTree(Node* p,Node* q){
    if(p == NULL && q == NULL) return true;
    if(p == NULL || q == NULL) return false;
    int leftSame = isSameTree(p->left,q->left);
    int rightSame = isSameTree(p->right,q->right);

    return leftSame && rightSame && p->Data == q->Data;
}

bool isSubTree(Node* root,Node* subRoot){
    queue<Node*> que;
    que.push(root);

    while(!que.empty()){
        Node* temp = que.front();
        que.pop();

        if(temp->Data == subRoot->Data){
            if(isSameTree(temp,subRoot)) return true;
        }

        if(root->left){
            que.push(root->left);
        } 
        if(root->right){
            que.push(root->right);
        }
    }
    return false;
}
int count = 0;
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    if(count < leftHeight+rightHeight){
        count = leftHeight+rightHeight;
    }
    return max(leftHeight,rightHeight) + 1;
}

int diameter(Node* root){
    height(root);
    return count;
}

void topView(Node* root){
    map<int,int> mp;
    queue<pair<Node*,int>> que;
    que.push({root,0});

    while(!que.empty()){
        Node* temp = que.front().first;
        int c = que.front().second;
        que.pop();
        if(mp.find(c) == mp.end()){
            mp[c]=temp->Data;
        }
        if(root->left){
            que.push({root->left,c-1});
        }
        if(root->right){
            que.push({root->right,c+1});
        }
    }

    for(auto val : mp){
        cout<<val.second<<" ";
    }
}

// Kth Level :-
void kthLevel(Node* root,int k){
    if(root == NULL){
        return;
    }
    if(k == 1){
        cout<<root->Data<<" ";
        return;
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right,k-1);
}

// Lowest Common Ancestor :-
Node* LCA(Node* root,Node* p,Node* q){
    if(root == NULL){
        return NULL;
    }
    if(root == p || root == q){
        return root;
    }
    Node* leftLCA = LCA(root->left,p,q);
    Node* rightLCA = LCA(root->right,p,q);

    if(leftLCA && rightLCA){
        return root;
    } else if (leftLCA != NULL){
        return leftLCA;
    } else {
        return rightLCA;
    }
}

// Built a tree from inorder and preorder tarversal :-
int search(vector<int> inorder,int left,int right,int target){
    for(int i = left ;i<=right;i++){
        if(inorder[i] == target){
            return i;
        }
    }
    return -1;
}

Node* builtTreeInorderPreorder(vector<int>& preorder,vector<int>& inorder,int preIdx ,int left,int right){
    if(left > right){
        return NULL;
    }
    Node* root = new Node(preorder[preIdx]);
    preIdx++;
    int inIdx = search(inorder,left,right,preorder[preIdx]);
    root->left = builtTreeInorderPreorder(preorder,inorder,preIdx,left,inIdx-1);
    root->right = builtTreeInorderPreorder(preorder,inorder,preIdx,inIdx+1,right);

    return root;
}

void helper(vector<string>& arr,Node* root,string str){
    if(root == NULL){
        arr.push_back(str);
    }

    helper(arr,root->left,str+"->"+to_string(root->left->Data));
    helper(arr,root->right,str+"->"+to_string(root->right->Data));
}

vector<string> builtPath(Node* root){
    string str = to_string(root->Data);
    vector<string> arr;
    helper(arr,root,str);
    return arr;
}

int sumTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);

    root->Data += leftSum + rightSum;
    return root->Data;
}

int main(){
    vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = builtTree(arr);
    cout<<countSum(root);
    return 0;
}