class Group1(name: String) {
    private var counter: Int = 0
    private var people: Array<Person?> = arrayOfNulls<Person>(10)
    private var groupName1: String = name

    fun addPerson(name: String , id: Int , age: Int): Unit {
        people[counter] = Person(name , id , age)
        counter++
    }

    fun printInfo(): Unit {
        println("Group 1's name is: $groupName1")
        for(i in 0 ..< counter){
            println(people[i].toString())
        }
    }

    fun insertionSort() {
        for(out in 1 ..< counter){
            val key: Person? = people[out]

            var index: Int = out - 1
            while((index > -1) && (people[index]!!.getAge() < key!!.getAge())) {
                people[index + 1] = people[index]
                index--
            }

            people[index + 1] = key
        }
    }
}