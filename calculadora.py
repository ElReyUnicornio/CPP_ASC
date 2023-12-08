import math
import random

def suma():
    a = float(input("Ingrese el primer número: "))
    b = float(input("Ingrese el segundo número: "))
    resultado = a + b
    print(f"La suma de {a} y {b} es: {resultado}")

def resta():
    a = float(input("Ingrese el primer número: "))
    b = float(input("Ingrese el segundo número: "))
    resultado = a - b
    print(f"La resta de {a} y {b} es: {resultado}")

def multiplicacion():
    a = float(input("Ingrese el primer número: "))
    b = float(input("Ingrese el segundo número: "))
    resultado = a * b
    print(f"La multiplicación de {a} y {b} es: {resultado}")

def division():
    a = float(input("Ingrese el numerador: "))
    b = float(input("Ingrese el denominador: "))
    resultado = a / b
    print(f"La división de {a} entre {b} es: {resultado}")

def random_number():
    numero_aleatorio = random.randint(0, 1000)
    print(f"Número aleatorio entre 0 y 1000: {numero_aleatorio}")

def suma_lista():
    numeros = input("Ingrese una lista de números separados por espacios: ").split()
    numeros = [float(numero) for numero in numeros]
    resultado = sum(numeros)
    print(f"La suma de los números es: {resultado}")

def raiz_cuadrada():
    numero = float(input("Ingrese un número para calcular su raíz cuadrada: "))
    resultado = math.sqrt(numero)
    print(f"La raíz cuadrada de {numero} es: {resultado}")

def potencia():
    base = float(input("Ingrese la base: "))
    exponente = float(input("Ingrese el exponente: "))
    resultado = math.pow(base, exponente)
    print(f"{base} elevado a la {exponente} es: {resultado}")

def logaritmo():
    numero = float(input("Ingrese un número para calcular su logaritmo en base 10: "))
    resultado = math.log10(numero)
    print(f"El logaritmo en base 10 de {numero} es: {resultado}")

def seno():
    angulo = float(input("Ingrese el ángulo en radianes: "))
    resultado = math.sin(angulo)
    print(f"El seno de {angulo} radianes es: {resultado}")

def coseno():
    angulo = float(input("Ingrese el ángulo en radianes: "))
    resultado = math.cos(angulo)
    print(f"El coseno de {angulo} radianes es: {resultado}")

def tangente():
    angulo = float(input("Ingrese el ángulo en radianes: "))
    resultado = math.tan(angulo)
    print(f"La tangente de {angulo} radianes es: {resultado}")

def grados_a_radianes():
    grados = float(input("Ingrese el ángulo en grados: "))
    radianes = math.radians(grados)
    print(f"{grados} grados equivalen a {radianes} radianes")

def radianes_a_grados():
    radianes = float(input("Ingrese el ángulo en radianes: "))
    grados = math.degrees(radianes)
    print(f"{radianes} radianes equivalen a {grados} grados")

def menu():
    while True:
        print("\nMenu:")
        print("1. Suma de dos números")
        print("2. Resta de dos números")
        print("3. Multiplicación de dos números")
        print("4. División de dos números")
        print("5. Creación de números aleatorios de 0 a 1000")
        print("6. Suma de una lista de números")
        print("7. Cálculo de la raíz cuadrada de un número")
        print("8. Cálculo de una potencia")
        print("9. Cálculo del logaritmo en base 10")
        print("10. Cálculo del seno de un ángulo en radianes")
        print("11. Cálculo del coseno de un ángulo en radianes")
        print("12. Cálculo de la tangente de un ángulo en radianes")
        print("13. Conversión de grados a radianes")
        print("14. Conversión de radianes a grados")
        print("15. Salir del programa")

        opcion = int(input("Seleccione una opción: "))

        if opcion == 1:
            suma()
        elif opcion == 2:
            resta()
        elif opcion == 3:
            multiplicacion()
        elif opcion == 4:
            division()
        elif opcion == 5:
            random_number()
        elif opcion == 6:
            suma_lista()
        elif opcion == 7:
            raiz_cuadrada()
        elif opcion == 8:
            potencia()
        elif opcion == 9:
            logaritmo()
        elif opcion == 10:
            seno()
        elif opcion == 11:
            coseno()
        elif opcion == 12:
            tangente()
        elif opcion == 13:
            grados_a_radianes()
        elif opcion == 14:
            radianes_a_grados()
        elif opcion == 15:
            print("Saliendo del programa.")
            break
        else:
            print("Opción no válida. Por favor, elija una opción válida.")

menu()