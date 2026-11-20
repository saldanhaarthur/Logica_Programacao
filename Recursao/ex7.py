def formacao(frase):

    frase = ''.join(frase) #pega todos os textos soltos e cola 
    
    while "()" in frase or "{}" in frase or "[]" in frase:
        frase = frase.replace("()", "")
        frase = frase.replace("{}", "")
        frase = frase.replace("[]", "")

    if frase == '':
        return True
    else:
        return False


completo = []
while True:
    simbolo = input().strip() #strip para tirar qualquer espaço ou quebra de linha
    if simbolo == "!":
        break

    if simbolo == "*" and len(completo) >=2:
        del completo[-2] #excluo o penultimo simbolo escrito
    elif simbolo in "()[]{}":
        completo.append(simbolo) #adiciono o simbolo no final da frase com o append

resultado = formacao(completo)

if resultado:
    print('bem formada')
else:
    print('mal formada')