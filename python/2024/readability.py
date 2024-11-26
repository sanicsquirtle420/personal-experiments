def main():
    # Prompt the user for some text
    text: str = input("Text: ")

    # Count the number of letters, words, and sentences in the text
    let: int = count_letters(text)
    wor: int = count_words(text)
    sen: int = count_sentences(text)

    # Compute the Coleman-Liau index
    let_i: float = (float(let)/ wor) * 100
    sen_i: float = (float(sen) / wor) * 100
    index: float = 0.0588 * let_i - 0.296 * sen_i - 15.8
    i: int = round(index)


    # Print the grade level
    if i < 1:
        print("Before Grade 1")
    elif i >= 1 and i <= 16:
        print(f"Grade {i}")
    else:
        print("Grade 16+")

def count_letters(text: str) -> int:
    count: int = 0
    for i in range(len(text)):
        if 'A' <= text[i] <= 'Z' or 'a' <= text[i] <= 'z':
            count += 1
        else:
            count += 0

    return count

def count_words(text: str) -> int:
    words: list = text.split(" ")
    return len(words)

def count_sentences(text: str) -> int:
    count: int = 0
    for i in range(len(text)):
        if text[i] == '.' or text[i] == '!' or text[i] == '?':
            count += 1
        else:
            count += 0

    return count


if __name__ == "__main__":
    main()
