fun main() {
    println("#### Part 1 ####")
    val one: Group1 = Group1("Supports")

    one.addPerson("Juno" , 2763 , 19)
    one.addPerson("Lucio" , 8750 , 28)
    one.addPerson("Moira" , 6523 , 50)
    one.addPerson("Kiriko" , 1428 , 21)
    one.addPerson("Lifeweaver" , 7623 , 31)

    one.printInfo()

    println("\n--- The data for Group 1 is now sorted ---")
    one.insertionSort()
    one.printInfo()

    println("\n#### Part 2 ####")

    val two: Group2 = Group2("Tanks")

    two.addPerson("Mauga" , 8634 , 37)
    two.addPerson("Doomfist" , 6354 , 47)
    two.addPerson("D.Va" , 7233 , 21)
    two.addPerson("Winston" , 2397 , 31)
    two.addPerson("Zarya" , 6192 , 30)

    two.printInfo()
    println("\n--- The data for Group 2 is now sorted ---")
    two.selectionSort()
    two.printInfo()
}