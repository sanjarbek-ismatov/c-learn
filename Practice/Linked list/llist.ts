class LNode{
    value: number;
    next: LNode | null;
    prev: LNode | null;
    constructor(value: number){
        this.value = value
        this.next = null
        this.prev = null
    }
}

class LinkedList{
    private head: LNode | null;
    private tail: LNode | null;
    public size: number;
    constructor(){
        this.head = null
        this.tail = null
        this.size = 0
    }
    isEmpty(){
        return this.size === 0;
    }
    prepend(value: number){
        const node = new LNode(value)
        if(this.isEmpty()){
            this.head = node
            this.tail = node
        } else if(this.head){
            this.head.prev = node
            node.next = this.head
            this.head = node
        }
        this.size++
    }

}

const llist = new LinkedList()
console.log(llist.size)