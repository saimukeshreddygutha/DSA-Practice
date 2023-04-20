class Pair {
	public TreeNode node;
	public int id;

	Pair(TreeNode node, int id) {
		this.node = node;
		this.id = id;
	}
}


class Solution {
	public int widthOfBinaryTree(TreeNode root) {
		LinkedList<Pair> q = new LinkedList<>();
		q.add(new Pair(root, 0));
		int maxi = 0;

		while (q.size() != 0) {
			int sz = q.size();
			int first = q.peekFirst().id, last = q.peekLast().id;
			maxi = Math.max(maxi, last - first + 1);

			for (int i = 0; i < sz; i++) {
				int cur_id = q.peek().id - first;
				TreeNode cur = q.pop().node;
				if(cur.left != null) q.add(new Pair(cur.left, 2*cur_id +1 ));
				if(cur.right != null) q.add(new Pair(cur.right, 2*cur_id +2 ));
			}
		}
		return maxi;
	}
}
