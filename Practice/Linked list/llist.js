class Node{
    constructor(value){
        this.value = value
        this.next = null
        this.prev = null
    }
}
class LinkedList{
    constructor(){
        this.head = null
        this.tail = null
        this.size = 0
    }
    isEmpty(){
        return this.size === 0;
    }

}

const llist = new LinkedList()
console.log(llist.size)