n1 = parseInt(prompt("inserisci il primo numero"))

segno = prompt("inserisci un'operazione matematica tra +, -, /, *, **")

n2 = parseInt(prompt("inserisci il secondo numero"))


if(Number.isNaN(n1) || Number.isNaN(n2))
{
    alert("uno dei numeri inseriti non è valido")
}

else if(segno == "+" || segno == "-" || segno == "/" || segno == "*" || segno == "**")
{
    funzioni = {
        "+": (a,b) => a+b,
        "-": (a,b) => a-b,
        "/": (a,b) => a/b,
        "*": (a,b) => a*b,
        "**": (a,b) => a**b
    }

    alert(funzioni[segno](n1,n2))

    
} else {
    alert("segno operazionale non valido")
}