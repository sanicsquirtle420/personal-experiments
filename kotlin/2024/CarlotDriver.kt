fun main() {
    print("City: ")
    val city: String = readln()
    val sample = Carlot(city)

    sample.addCarToArray("Blue" , "Honda" , "Civic" , 65432.99)
    sample.addCarToArray("Maroon" , "Jeep" , "Cherroke" , 23456.88)
    sample.addCarToArray("Red" , "Hyundai" , "Sonata" , 34567.77)

    sample.printLotInfo()

    println("\nUsing non-parameterized Carlot constructor")
    val sample2 = Carlot()
    sample2.addCarToArray("a" , "b" , "c" , 1.23)
    sample2.addCarToArray("d" , "e" , "f" , 4.56)
    sample2.addCarToArray("g" , "h" , "i" , 7.89)

    sample2.printLotInfo()

    println("\nUsing non-parameterized Vehicle constructor")
    val nullCar = Vehicle()
    println(nullCar.toString())
}