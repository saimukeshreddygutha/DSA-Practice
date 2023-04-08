/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;
    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}
*/

class Solution {

    HashMap<Node, Node> map = new HashMap<>();
    public Node cloneGraph(Node node) {
        
        if(node==null)return node;

        if(!map.containsKey(node)){

        Node clone = new Node(node.val);
        map.put(node, clone)
        List<Node> neighbors = node.neighbors;

        for(int i = 0;i < neighbors.size();i++){
            clone.neighbors.add(cloneGraph(neighbors.get(i)));
        }}

        return map.get(node);

    }
}
