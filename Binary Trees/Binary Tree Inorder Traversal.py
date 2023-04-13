class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        values = []
        self.inOrder(root,values)
        return values

    def inOrder(self, root,values):
        if(root == None):
            return
        
        self.inOrder(root.left, values)
        values.append(root.val)
        self.inOrder(root.right, values)
        return
