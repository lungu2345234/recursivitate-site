function sumaCifrelor(n) {
    if (n === 0) return 0;
    return (n % 10) + sumaCifrelor(Math.floor(n / 10));
}

function calculeaza() {
    const n = parseInt(document.getElementById("numar").value);
    const rezultat = sumaCifrelor(n);
    document.getElementById("rezultat").innerText = "Suma cifrelor este: " + rezultat;
}
