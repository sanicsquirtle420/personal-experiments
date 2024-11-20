class Vehicle(color: String, make: String, model: String, cost: Double) {
    private var col: String = color
    private var mak: String = make
    private var mod: String = model
    private var cos: Double = cost

    constructor() :this("" , "" , "" , 0.0)

    fun getColor(): String {
        return col
    }

    fun getMake(): String {
        return mak
    }

    fun getModel(): String {
        return mod
    }

    fun getCost(): Double {
        return cos
    }

    override fun toString(): String {
        return String.format("Color: %s, Make: %s, Model: %s, Cost: $%.2f" ,
            col , mak , mod , cos)
    }
}