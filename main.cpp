#include <iostream>
template <class CL1>
class TNode{
    public: TNode* op_Par;
    public: TNode* op_LCh;
    public: TNode* op_RCh;
    public: CL1 op_Data;
    public: TNode(CL1 op_Data){
        op_Par= nullptr;
        op_LCh= nullptr;
        op_RCh= nullptr;
        this->op_Data = op_Data;
    }
};

template <class CL1>
class Tree{
    public: TNode<CL1>* op_Root;
    public: Tree(){
        op_Root= nullptr;
    }
};

int main(){
    Tree<int> o_Tree;
    return 0;
}
