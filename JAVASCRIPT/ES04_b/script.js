n = prompt("Inserisci un numero: ");

function inverti(n) {
    return n.split('').reverse().join('');
}

alert(inverti(n));