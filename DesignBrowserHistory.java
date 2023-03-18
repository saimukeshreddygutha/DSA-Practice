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
    public BrowserHistory(String homepage) {
        this.root = new Node(homepage);
        lastVisited = root;
    }
    
    public void visit(String url) {
        Node nn = new Node(url);
        lastVisited.next = nn;
        nn.prev = lastVisited;
        lastVisited = nn;
        
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
