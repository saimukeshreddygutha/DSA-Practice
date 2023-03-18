class Node{

    String pagename;
    Node next;
    Node prev;

    Node(String pagename){
        this.pagename = pagename;
        this.next = null;
        this.prev = null;
    }
 
}

class BrowserHistory {
    Node root;
    Node lastVisited;
    HashMap<String, Node> map = new HashMap<>();
    public BrowserHistory(String homepage) {
        this.root = new Node(homepage);
        map.put(homepage, this.root);
        lastVisited = root;
    }
    
    public void visit(String url) {
        Node r = root;
        Node t = map.getOrDefault(url, null);
        if(t == null){
            Node nn = new Node(url);
            lastVisited.next = nn;
            nn.prev = lastVisited;
            map.put(url, nn);
            lastVisited = nn;            
        }else{
            Node p = t.prev;
            if(p != null){
                p.next = t.next;
                t.next.prev = p;
                lastVisited.next = t;
                lastVisited = t;
            }
        }
    }
    
    public String back(int steps) {
        while(lastVisited.prev != null && steps != 0){
            lastVisited = lastVisited.prev;
            steps--;
        }


        return lastVisited.pagename;
    }
    
    public String forward(int steps) {
        while(lastVisited.next != null && steps != 0){
            lastVisited = lastVisited.next;
            steps--;
        }

        return lastVisited.pagename;
    }
}

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory obj = new BrowserHistory(homepage);
 * obj.visit(url);
 * String param_2 = obj.back(steps);
 * String param_3 = obj.forward(steps);
 */
