def sum_rec(number):
    if number == 0:
        return 0

    return number + sum_rec(number - 1)

def run():
    number = int(input('Ingresa un numero para calcular una sumatoria recursivamente: '))
    result = sum_rec(number)
    print(result)

if __name__ == "__main__":
    run()
