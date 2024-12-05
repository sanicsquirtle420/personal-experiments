class Manipulate() {
    private var sBuild1: StringBuilder = StringBuilder()
    private var sBuild2: StringBuilder = StringBuilder()

    fun convertPhrase(phrase: String): String {
        var result: StringBuilder = StringBuilder()
        var words: List<String> = phrase.split(" ")
        var sample: String = ""

        for(i in 0..< words.size) {
            var first: Char = words[i][0]
            if(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
                sBuild1 = StringBuilder(words[i])
                sBuild1.append("ay")

                result.append(" $sBuild1")
            }
            else {
                sBuild2 = StringBuilder(words[i])
                sBuild2.delete(0 , 1)
                sBuild2.append("${first}ay")

                result.append(" $sBuild2")
            }
            sample = result.toString()
        }

        return sample.uppercase()
    }
}