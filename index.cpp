<style>
    #codBox {
        background: #222;
        color: #eee;
        padding: 12px;
        border-radius: 6px;
        margin-top: 10px;
        display: none;
        white-space: pre-wrap;
        font-family: Consolas, monospace;
    }

    #btnCod {
        background: #007bff;
        color: white;
        padding: 10px 14px;
        border: none;
        border-radius: 5px;
        cursor: pointer;
    }

    #btnCod:hover {
        background: #0056b3;
    }
</style>

<button id="btnCod">Arată codul</button>
<p>Număr apeluri: <span id="counter">0</span></p>

<div id="codBox">
<code>
function test() {
    console.log("Acesta este un exemplu de cod.");
}
test();
</code>
</div>

<script>
    const btn = document.getElementById('btnCod');
    const codBox = document.getElementById('codBox');
    const counter = document.getElementById('counter');

    let visible = false;
    let calls = 0;

    btn.addEventListener('click', () => {
        visible = !visible;
        codBox.style.display = visible ? "block" : "none";
        btn.textContent = visible ? "Ascunde codul" : "Arată codul";

        // crește numărul de apeluri
        calls++;
        counter.textContent = calls;
    });
</script>
