opcion=int(input("Ingrese la operación deseada\n 1. Sumar\n 2. Restar\n 3. Multiplicar\n 4. Dividir \n"))

num1 = int(input("Introduzca el primer numero: "))
num2 = int(input("Introduzca el segundo numero: "))

#print("Ingrese la operación deseada\n 1. Sumar\n 2. Restar\n 3. Multiplicar\n 4.Dividir")



if opcion==1:
	result = num1 + num2
	print("\nResultado de la suma: ",result)
elif opcion==2:
	result = num1 - num2
	print("\nResultado de la suma: ",result)
elif opcion==3:
	result = num1 * num2
	print("\nResultado de la suma: ",result)
elif opcion==4:
	result = num1 / num2
	print("\nResultado de la suma: ",result)
else :
	print("Opcion incorrecta")
