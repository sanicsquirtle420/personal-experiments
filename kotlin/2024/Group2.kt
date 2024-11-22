class Group2(name: String) {
    private var counter: Int = 0
    private var people2: Array<Person?> = arrayOfNulls(10)
    private var groupName2: String = name

    fun addPerson(name: String , id: Int, age: Int): Unit {
        people2[counter] = Person(name , id , age)
        counter++
    }

    fun printInfo(): Unit {
        println("Group 2's name is: $groupName2")
        for(i in 0 ..< counter){
            println(people2[i].toString())
        }
    }

    fun selectionSort(): Unit {
        var index: Int

        for(outer in 0 ..< counter){
            index = outer
            for(inner in (outer + 1) ..< counter){
                if(people2[inner]!!.getAge() > people2[index]!!.getAge()) {
                    index = inner
                }
            }

            val temp: Person? = people2[outer]
            people2[outer] = people2[index]
            people2[index] = temp
        }
    }
}