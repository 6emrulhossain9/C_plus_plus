def has_uppercase(password):
    return any(ch.isupper() for ch in password)

def has_lowercase(password):
    return any(ch.islower() for ch in password)

def has_digit(password):
    return any(ch.isdigit() for ch in password)

def has_special_char(password):
    special_chars = "!@#$%^&*()-_=+{}[]|\\;:'\",.<>?/"
    return any(ch in special_chars for ch in password)

def calculate_strength(password):
    score = 0
    if len(password) >= 8:
        score += 1
    if has_uppercase(password):
        score += 1
    if has_lowercase(password):
        score += 1
    if has_digit(password):
        score += 1
    if has_special_char(password):
        score += 1
    return score

def get_strength_message(score):
    return {
        5: "Very Strong!",
        4: "Strong!",
        3: "Medium!",
        2: "Weak!",
        1: "Very Weak!",
        0: "Too Short!"
    }.get(score, "Too Short!")

def main():
    password = input("Enter a password: ")
    strength = calculate_strength(password)
    print(f"Password Strength: {get_strength_message(strength)}")

if __name__ == "__main__":
    main()
