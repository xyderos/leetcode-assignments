// https://leetcode.com/problems/validate-binary-search-tree/

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode()
	    : val(0)
	    , left(nullptr)
	    , right(nullptr)
	{
	}
	TreeNode(int x)
	    : val(x)
	    , left(nullptr)
	    , right(nullptr)
	{
	}
	TreeNode(int x, TreeNode *left, TreeNode *right)
	    : val(x)
	    , left(left)
	    , right(right)
	{
	}
};

auto valid(TreeNode *head) -> bool;
