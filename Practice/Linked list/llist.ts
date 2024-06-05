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
    isEmpty(): boolean{
        return this.size === 0;
    }
    prepend(value: number):void{
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
    append(value: number): void{
        if(this.isEmpty())this.prepend(value)
        else{
            if(this.tail){
                const node = new LNode(value)
                this.tail.next = node
                node.prev = this.tail
                this.tail = node
                this.size++
            }
        }
    }

}

const llist = new LinkedList()
llist.append(1)
llist.append(2)
llist.append(3)
console.log(llist)