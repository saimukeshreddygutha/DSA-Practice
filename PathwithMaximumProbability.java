
class Solution {
    class Edge {
        int node;
        double weight;
        
        public Edge(int node, double weight) {
            this.node = node;
            this.weight = weight;
        }
    }
    
    public double maxProbability(int n, int[][] eg, double[] p, int src, int e) {
        List<Edge>[] g = new ArrayList[n];
        for (int i = 0; i < n; i++) {
            g[i] = new ArrayList<>();
        }
        
        for (int i = 0; i < eg.length; i++) {
            g[eg[i][0]].add(new Edge(eg[i][1], p[i]));
            g[eg[i][1]].add(new Edge(eg[i][0], p[i]));
        }
        
        double[] dis = new double[n]; 
        PriorityQueue<Edge> pq = new PriorityQueue<>((a, b) -> Double.compare(b.weight, a.weight));
        
        pq.offer(new Edge(src, 1)); 
        dis[src] = 1; 
        
        while (!pq.isEmpty()) {
            Edge top = pq.poll();
            double nodeDis = top.weight;
            int node = top.node;
            
            if (node == e) {
                return nodeDis;
            }
            
            for (Edge child : g[node]) {
                int childNode = child.node;
                double childWt = child.weight;
                if (childWt * nodeDis > dis[childNode]) {
                    dis[childNode] = childWt * nodeDis;
                    pq.offer(new Edge(childNode, dis[childNode]));
                }
            }
        }
        
        return 0; 
    }
}
