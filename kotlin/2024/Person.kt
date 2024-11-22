class Person(name: String , id: Int , age: Int) {
    private var n: String = name
    private var i: Int = id
    private var a: Int = age

    constructor() : this("" , 0 , 0)

    fun getName(): String {
        return n
    }

    fun getID(): Int {
        return i
    }

    fun getAge(): Int {
        return a
    }

    override fun toString(): String {
        return String.format("%s: ID: %d Age: %d" , n , i , a)
    }
}