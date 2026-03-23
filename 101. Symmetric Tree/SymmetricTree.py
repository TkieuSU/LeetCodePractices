# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def isMirror(leftTree, rightTree):
            if not leftTree and not rightTree: #In case both tree are null -> reach the end
                return True
            if not leftTree or not rightTree: #In case either left or right tree are null -> only one branch is null
                return False
            
            return leftTree.val == rightTree.val and isMirror(leftTree.left,rightTree.right) and isMirror(leftTree.right, rightTree.left)
        return isMirror(root.left,root.right)
