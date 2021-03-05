/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/
​
class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
​
    Node* a=p;
    Node* b=q;
    while (a!=b){
        if (a!=NULL) a=a->parent;
        else a=q;
        if (b!=NULL) b=b->parent;
        else b=p;
       }
        //same as LC160 intersection of two linked list
        return a;
    }
};
