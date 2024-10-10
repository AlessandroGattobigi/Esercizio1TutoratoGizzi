# Esercizio1TutoratoGizzi
Esercizio 1 Equazioni di secondo grado
Si realizzi un programma in linguaggio C per risolvere equazioni di secondo grado. In particolare, data una generica
equazione di secondo grado nella forma
ax2 + bx + c = 0
dove a, b, c sono coefficienti reali noti (valori di tipo double passati da tastiera con scanf()) e x rappresenta l’incognita, il
programma determini le due radici x1 ed x2 dell’equazione data, ove esse esistano. Si identifichino tutti i casi particolari
(a == 0, ∆ == 0, ∆ < 0, ∆ > 0 come sotto specificato) e si stampino gli opportuni messaggi informativi. ∆ = b
2 ÷ 4ac,
x = (−b ±
√
∆) ÷ 2a. Includere la libreria math.h per poter utilizzare la funzione radice quadrata sqrt(). Quando si
compila con gcc aggiungere “-lm” per linkare la libreria matematica (esempio, gcc -o programma programma.c -lm)
• Se a == 0 allora e’ una equazione di primo grado.
– Se anche b == 0 allora l’equazione ammette infinite soluzioni (stampare questo messaggio).
– Se b! = 0, l’unica soluzione vale −c ÷ b.
• Se ∆ == 0 esiste una sola soluzione.
• Se ∆ > 0 esistono due soluzioni.
• Se ∆ < 0 non esistono soluzioni in campo reale (qui basta solo stampare questo messaggio)
