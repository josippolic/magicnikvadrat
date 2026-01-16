

## Zadatak: Magični kvadrat

Magični kvadrat je matrica dimenzija **M × M** u kojoj su upisani svi brojevi od **1 do M²**, pri čemu se **nijedan broj ne ponavlja**, a **zbroj svih brojeva u svakom retku, svakom stupcu i na obje dijagonale je isti**.

### Zadatak

Vaš je zadatak provjeriti je li zadana matrica magični kvadrat.

Međutim, u zadanoj matrici neki brojevi mogu **nedostajati** i na njihovim mjestima nalazi se vrijednost **0**. Potrebno je:

1. odrediti **koji brojevi iz intervala [1, M²] nedostaju**,
2. **umetnuti te brojeve na pozicije gdje se nalazi 0** (redoslijedom pojavljivanja),
3. nakon toga **provjeriti zadovoljava li matrica pravilo magičnog kvadrata**.

### Ulaz

* U prvom retku nalazi se prirodan broj **M**.
* U sljedećih **M redaka** nalazi se po **M cijelih brojeva** (vrijednosti su iz intervala 0 do M²).
* Vrijednost **0** označava prazno mjesto u matrici.

### Izlaz

* Ako matrica (nakon popunjavanja nula) **nije magični kvadrat**, ispisati:

```
Ovo nije magicni kvadrat
```

* Ako matrica **jest magični kvadrat**, ispisati cijelu matricu:

  * svaki redak u novi red,
  * svaki broj ispisan s **fiksnom širinom od 3 znaka**.

### Napomena

Zbroj koji mora biti jednak u svakom retku, stupcu i dijagonali iznosi:

[
\text{zbroj} = \frac{(1 + M^2) \cdot M}{2}
]

### Dodatni zahtjevi

* Matricu je potrebno **dinamički alocirati**.
* Provjera mora uključivati **sve retke, sve stupce i obje dijagonale**.

---


