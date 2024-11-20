class Carlot(name: String) {
    private var lotName: String = name
    private var lot = arrayOfNulls<Vehicle>(100)
    private var counter: Int = 0

    constructor() : this("")

    fun getLotName(): String {
        return lotName
    }

    fun getLogicalLength(): Int {
        return counter
    }

    fun addCarToArray(color: String , make: String , model: String , cost: Double): Unit {
        lot[counter] = Vehicle(color, make , model , cost)
        counter++
    }

    fun avgCost(): Double {
        var total: Double = 0.0
        for(i in 0 ..< counter) {
            total += lot[i]!!.getCost()
        }
        return total / counter
    }

    fun printLotInfo(): Unit {
        println("These cars are in lot $lotName :\n")
        for(i in 0 ..< counter){
            println("\t${lot[i].toString()}")
        }

        val total: Double = avgCost()
        println()
        println(String.format("\tThe average cost of the vehicles is $%.2f" , total))
    }
}